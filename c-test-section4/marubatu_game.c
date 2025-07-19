#include <stdio.h>

// ゲームボード（3x3）
char board[3][3];
int current_player = 1;  // 1=○、2=×

// ボード初期化
void init_board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';  // 空のマス
        }
    }
}

// ボード表示
void show_board() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// 位置説明表示
void show_positions() {
    printf("位置の指定方法:\n");
    printf(" 1 | 2 | 3 \n");
    printf("-----------\n");
    printf(" 4 | 5 | 6 \n");
    printf("-----------\n");
    printf(" 7 | 8 | 9 \n");
    printf("\n");
}

// 指定位置にマークを置く
int place_mark(int position) {
    // 位置を配列のインデックスに変換
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;
    
    // その位置が空いているかチェック
    if (board[row][col] == ' ') {
        // 現在のプレイヤーのマークを置く
        if (current_player == 1) {
            board[row][col] = 'O';  // ○
        } else {
            board[row][col] = 'X';  // ×
        }
        return 1;  // 成功
    } else {
        return 0;  // 失敗（既に埋まっている）
    }
}

// 勝敗判定
int check_winner() {
    // 横のライン（3パターン）
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && 
            board[i][0] == board[i][1] && 
            board[i][1] == board[i][2]) {
            return 1;  // 勝利
        }
    }
    
    // 縦のライン（3パターン）
    for (int j = 0; j < 3; j++) {
        if (board[0][j] != ' ' && 
            board[0][j] == board[1][j] && 
            board[1][j] == board[2][j]) {
            return 1;  // 勝利
        }
    }
    
    // 斜めのライン（2パターン）
    if (board[0][0] != ' ' && 
        board[0][0] == board[1][1] && 
        board[1][1] == board[2][2]) {
        return 1;  // 勝利
    }
    
    if (board[0][2] != ' ' && 
        board[0][2] == board[1][1] && 
        board[1][1] == board[2][0]) {
        return 1;  // 勝利
    }
    
    return 0;  // まだ勝負がついていない
}

// 引き分け判定（ボードが埋まっているか）
int is_draw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;  // まだ空きがある
            }
        }
    }
    return 1;  // 全部埋まっている
}

// メイン関数
int main() {
    int position;
    int game_over = 0;
    
    printf("=== 三目並べゲーム ===\n");
    printf("○が先行、×が後攻です\n");
    
    // ゲーム初期化
    init_board();
    show_positions();
    
    // ゲームループ
    while (!game_over) {
        show_board();
        
        // 現在のプレイヤーを表示
        if (current_player == 1) {
            printf("○のターン: ");
        } else {
            printf("×のターン: ");
        }
        printf("位置を選んでください (1-9): ");
        
        // 入力受付
        scanf("%d", &position);
        
        // 入力チェック
        if (position < 1 || position > 9) {
            printf("1から9の数字を入力してください\n");
            continue;
        }
        
        // マークを置く
        if (place_mark(position)) {
            // 勝敗判定
            if (check_winner()) {
                show_board();
                if (current_player == 1) {
                    printf("*** ○の勝利です！ ***\n");
                } else {
                    printf("*** ×の勝利です！ ***\n");
                }
                game_over = 1;
            } else if (is_draw()) {
                show_board();
                printf("*** 引き分けです！ ***\n");
                game_over = 1;
            } else {
                // プレイヤー交代
                current_player = (current_player == 1) ? 2 : 1;
            }
        } else {
            printf("その位置は既に埋まっています\n");
        }
    }
    
    printf("ゲーム終了です\n");
    return 0;
}
