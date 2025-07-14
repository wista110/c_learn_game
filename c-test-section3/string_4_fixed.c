#include <stdio.h>
int main()
{
    // 方法1: 配列サイズを大きくする
    char job1[][13] = {"勇者","戦士","僧侶","魔術師","踊り子",};
    
    // 方法2: ポインタ配列を使用（推奨）
    char *job2[] = {"勇者","戦士","僧侶","魔術師","踊り子",};
    
    printf("=== 方法1: 固定サイズ配列 ===\n");
    for (int i = 0; i < 5; i++) {
        printf("職業%dは%sです\n", i+1, job1[i]);
    }
    
    printf("\n=== 方法2: ポインタ配列 ===\n");
    for (int i = 0; i < 5; i++) {
        printf("職業%dは%sです\n", i+1, job2[i]);
    }
    
    return 0;
} 