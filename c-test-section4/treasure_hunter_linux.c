#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// ゲーム設定
#define MAP_W 18
#define MAP_H 10

// マップデータ
char map[MAP_H][MAP_W] = {
    "#################",
    "#               #",
    "# ###       ### #", 
    "# #           # #",
    "#   #  ###  #   #",
    "#   #  # #  #   #",
    "# #           # #",
    "# ###       ### #",
    "#               #",
    "#################"
};

// ゲーム変数
int pl_x = 1, pl_y = 1;    // プレイヤー位置（初期位置：左上角）
int score = 0;             // スコア
int timer = 100;           // 残り時間

// 画面クリア（シンプル版）
void clear_screen() {
    system("clear");  // Linuxのclearコマンドを使用
}

// ゲーム画面描画
void draw_game() {
    clear_screen();
    
    printf("=== 宝回収ゲーム ===\n");
    
    // マップとオブジェクトを描画
    for (int y = 0; y < MAP_H; y++) {
        for (int x = 0; x < MAP_W; x++) {
            if (x == pl_x && y == pl_y) {
                printf("P");  // プレイヤー
            } else if (map[y][x] == 'G') {
                printf("G");  // 宝
            } else if (map[y][x] == '#') {
                printf("#");  // 壁
            } else {
                printf(" ");  // 空間
            }
        }
        printf("\n");
    }
    
    // 情報表示
    printf("SCORE: %d  TIME: %d\n", score, timer);
    printf("操作: w(上) s(下) a(左) d(右) q(終了)\n");
    printf("移動を入力してEnter: ");
}

// ランダムに宝を配置
void place_treasure() {
    int x, y;
    int attempts = 0;
    
    // 安全な配置（無限ループ防止）
    do {
        x = 1 + rand() % (MAP_W - 2);
        y = 1 + rand() % (MAP_H - 2);
        attempts++;
        if (attempts > 50) return;  // 50回試行して失敗したら諦める
    } while (map[y][x] != ' ' || (x == pl_x && y == pl_y));
    
    map[y][x] = 'G';  // 宝を配置
}

int main() {
    srand(time(NULL));  // 乱数初期化
    
    printf("宝回収ゲーム開始！\n");
    printf("プレイヤー(P)を操作して宝(G)を集めましょう\n");
    printf("初期位置: 左上角 (1,1)\n");
    printf("Enterキーでスタート...\n");
    getchar();
    
    // 最初に宝を3個配置
    for (int i = 0; i < 3; i++) {
        place_treasure();
    }
    
    char move;
    
    // メインゲームループ（ターン制）
    while (timer > 0) {
        draw_game();
        
        // キー入力取得（ブロッキング）
        scanf(" %c", &move);
        
        // プレイヤー移動処理
        int new_x = pl_x, new_y = pl_y;
        
        switch (move) {
            case 'w': new_y--; break;  // 上
            case 's': new_y++; break;  // 下
            case 'a': new_x--; break;  // 左
            case 'd': new_x++; break;  // 右
            case 'q': 
                printf("ゲーム終了\n");
                return 0;
            default:
                printf("無効なキーです\n");
                sleep(1);
                continue;
        }
        
        // 移動先チェック
        if (new_x >= 0 && new_x < MAP_W && 
            new_y >= 0 && new_y < MAP_H && 
            map[new_y][new_x] != '#') {
            
            pl_x = new_x;
            pl_y = new_y;
            
            // 宝取得判定
            if (map[pl_y][pl_x] == 'G') {
                score += 10;           // スコア増加
                timer += 20;           // 時間延長
                map[pl_y][pl_x] = ' '; // 宝を消去
                printf("宝を発見！ スコア+10, 時間+20\n");
                place_treasure();      // 新しい宝を配置
                sleep(1);
            }
        } else {
            printf("そこには移動できません\n");
            sleep(1);
        }
        
        // 時間経過
        timer -= 2;
        
        // たまに宝を追加
        if (rand() % 4 == 0) {
            place_treasure();
        }
    }
    
    // ゲーム終了
    clear_screen();
    printf("*** GAME OVER ***\n");
    printf("最終スコア: %d\n", score);
    
    return 0;
} 