#include <stdio.h>
#include <string.h>

struct CHARACTER {
    char name[20];  // 長い名前にも対応
    int life;
    int strength;
    int defense;
};

int main() {
    // 文字列のバイト数確認
    printf("=== 文字列のバイト数確認 ===\n");
    char *name1 = "マーズ";
    char *name2 = "ジュピター";
    printf("\"マーズ\"のバイト数: %zu\n", strlen(name1)); //文字列のバイト数を確認できる。
    printf("\"ジュピター\"のバイト数: %zu\n", strlen(name2));
    
    // 複数のプレイヤーを作成
    printf("\n=== プレイヤー1: マーズ（バランス型） ===\n");
    struct CHARACTER player1 = {"マーズ", 1000, 500, 300};
    printf("名前: %s\n", player1.name);
    printf("体力: %d\n", player1.life);
    printf("攻撃力: %d\n", player1.strength);
    printf("防御力: %d\n", player1.defense);
    
    printf("\n=== プレイヤー2: ジュピター（防御特化型） ===\n");
    struct CHARACTER player2 = {"ジュピター", 1200, 300, 800};
    printf("名前: %s\n", player2.name);
    printf("体力: %d\n", player2.life);
    printf("攻撃力: %d\n", player2.strength);
    printf("防御力: %d\n", player2.defense);
    
    // プレイヤー比較
    printf("\n=== プレイヤー比較 ===\n");
    if (player1.defense > player2.defense) {
        printf("%s の方が防御力が高い！\n", player1.name);
    } else {
        printf("%s の方が防御力が高い！\n", player2.name);
    }
    
    if (player1.strength > player2.strength) {
        printf("%s の方が攻撃力が高い！\n", player1.name);
    } else {
        printf("%s の方が攻撃力が高い！\n", player2.name);
    }
    
    // 配列でプレイヤーを管理
    printf("\n=== 配列でプレイヤー管理 ===\n");
    struct CHARACTER party[2] = {
        {"マーズ", 1000, 500, 300},
        {"ジュピター", 1200, 300, 800}
    };
    
    for (int i = 0; i < 2; i++) {
        printf("プレイヤー%d: %s (体力:%d 攻撃:%d 防御:%d)\n", 
               i+1, party[i].name, party[i].life, party[i].strength, party[i].defense);
    }
    
    return 0;
} 