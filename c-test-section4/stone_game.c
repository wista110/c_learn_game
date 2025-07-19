#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ゲーム変数
int stones;      // 現在の石の数
int turn;        // ターン管理（0=プレイヤー, 1=コンピュータ）

// ゲーム初期化：石の数をランダムに決定
void initialize_game() {
    stones = 10 + rand() % 41;  // 10〜50個のランダム
    turn = 0;  // プレイヤーから開始
    printf("\n=== 石取りゲーム開始 ===\n");
    printf("石の数: %d個\n", stones);
    printf("ルール: 1個〜%d個まで取れます。最後の石を取った人の負けです。\n\n", stones / 2);
}

// プレイヤーのターン
int player_turn() {
    int take, max_take;
    
    max_take = stones / 2;  // 取れる最大数
    if (max_take == 0) max_take = 1;  // 石が1個の時は1個取るしかない
    
    printf("現在の石の数: %d個\n", stones);
    printf("何個取りますか？（1〜%d個）: ", max_take);
    
    // 入力チェックループ
    while (1) {
        scanf("%d", &take);
        
        // 有効な入力かチェック
        if (take >= 1 && take <= max_take && take <= stones) {
            break;  // 正しい入力なのでループを抜ける
        } else {
            // 想定外の入力時にルールを再表示
            printf("無効な入力です。1〜%d個の範囲で入力してください: ", max_take);
        }
    }
    
    stones -= take;  // 石を減らす
    printf("あなたが%d個取りました。石の残りは%d個です。\n\n", take, stones);
    
    return stones;  // 残り石数を返す
}

// コンピュータのターン
int computer_turn() {
    int take, max_take;
    
    max_take = stones / 2;  // 取れる最大数
    if (max_take == 0) max_take = 1;  // 石が1個の時は1個取るしかない
    
    // 完全ランダムで石を取る
    take = 1 + rand() % max_take;
    
    stones -= take;  // 石を減らす
    printf("コンピュータが%d個取りました。石の残りは%d個です。\n\n", take, stones);
    
    return stones;  // 残り石数を返す
}

// 勝敗判定と結果表示
void check_winner() {
    if (stones == 0) {
        if (turn == 0) {
            printf("*** コンピュータが最後の石を取りました。あなたの勝ちです！ ***\n");
        } else {
            printf("*** あなたが最後の石を取りました。あなたの負けです！ ***\n");
        }
    }
}

// 再戦選択
int play_again() {
    char choice;
    printf("\nもう一度プレイしますか？ (y/n): ");
    scanf(" %c", &choice);  // 前のスペースで改行文字をスキップ
    
    if (choice == 'y' || choice == 'Y') {
        return 1;  // 再戦する
    } else {
        return 0;  // 終了する
    }
}

// メインのゲームループ
void game_loop() {
    while (stones > 0) {
        if (turn == 0) {
            // プレイヤーのターン
            player_turn();
            turn = 1;  // 次はコンピュータのターン
        } else {
            // コンピュータのターン
            computer_turn();
            turn = 0;  // 次はプレイヤーのターン
        }
        
        // 石が0個になったらゲーム終了
        if (stones == 0) {
            check_winner();
            break;
        }
    }
}

// メイン関数
int main() {
    srand(time(NULL));  // 乱数初期化
    
    printf("石取りゲームへようこそ！\n");
    
    // ゲームの大ループ（再戦対応）
    do {
        initialize_game();  // ゲーム初期化
        game_loop();        // メインゲーム実行
    } while (play_again()); // 再戦するかチェック
    
    printf("ゲームを終了します。ありがとうございました！\n");
    
    return 0;
}
