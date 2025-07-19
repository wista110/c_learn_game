#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// マップデータの定義
#define MAP_W 20
#define MAP_H 10
char map[MAP_H][MAP_W] = {
    "##################",
    "#                #",
    "# ###        ### #",
    "# #            # #",
    "#   #  ####  #   #",
    "#   #  #  #  #   #",
    "# #            # #",
    "# ###        ### #",
    "#                #",
    "##################"
};

int pl_x = 1, pl_y = 1;
int score = 0;

void draw_map() {
    system("clear");  // 画面クリア（Linux/Mac）
    
    for (int y = 0; y < MAP_H; y++) {
        for (int x = 0; x < MAP_W; x++) {
            if (x == pl_x && y == pl_y) {
                printf("@");  // プレイヤー
            } else if (map[y][x] == 'G') {
                printf("G");  // 宝物
            } else {
                printf("%c", map[y][x]);
            }
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
    printf("操作: w(上) s(下) a(左) d(右) q(終了)\n");
}

void place_treasure() {
    int x, y;
    do {
        x = 1 + rand() % (MAP_W - 2);
        y = 1 + rand() % (MAP_H - 2);
    } while (map[y][x] != ' ');
    
    map[y][x] = 'G';
}

int main() {
    srand(time(NULL));
    
    // 最初の宝物を配置
    for (int i = 0; i < 3; i++) {
        place_treasure();
    }
    
    char move;
    while (1) {
        draw_map();
        printf("移動方向を入力: ");
        scanf(" %c", &move);
        
        int new_x = pl_x, new_y = pl_y;
        
        switch (move) {
            case 'w': new_y--; break;  // 上
            case 's': new_y++; break;  // 下
            case 'a': new_x--; break;  // 左
            case 'd': new_x++; break;  // 右
            case 'q': 
                printf("ゲーム終了！最終スコア: %d\n", score);
                return 0;
            default:
                printf("無効なキーです\n");
                sleep(1);
                continue;
        }
        
        // 壁判定
        if (map[new_y][new_x] != '#') {
            pl_x = new_x;
            pl_y = new_y;
            
            // 宝物取得判定
            if (map[pl_y][pl_x] == 'G') {
                score++;
                map[pl_y][pl_x] = ' ';
                printf("宝物を発見！スコア+1\n");
                place_treasure();  // 新しい宝物を配置
                sleep(1);
            }
        } else {
            printf("壁にぶつかりました！\n");
            sleep(1);
        }
    }
    
    return 0;
} 