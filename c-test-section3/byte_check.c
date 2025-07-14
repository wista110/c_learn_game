#include <stdio.h>
#include <string.h>

int main()
{
    char *words[] = {"勇者", "戦士", "僧侶", "魔術師", "踊り子"};
    
    printf("=== 文字列のバイト数チェック ===\n");
    for (int i = 0; i < 5; i++) {
        printf("%s : %luバイト\n", words[i], strlen(words[i]));
    }
    
    printf("\n=== 各文字の詳細 ===\n");
    char *test = "魔術師";
    printf("文字列: %s\n", test);
    printf("バイト数: %lu\n", strlen(test));
    
    // バイトごとに表示
    for (int i = 0; test[i] != '\0'; i++) {
        printf("test[%d] = 0x%02X\n", i, (unsigned char)test[i]);
    }
    
    return 0;
} 