// ヘッダーファイルの役割を確認するプログラム

#include <stdio.h>   // printf, scanf など
#include <stdlib.h>  // rand, srand, malloc など  
#include <time.h>    // time, clock など

int main() {
    printf("=== ヘッダーファイルの機能確認 ===\n");
    
    // stdio.h の機能
    printf("1. stdio.h の機能: printf で画面出力\n");
    
    // time.h の機能
    time_t current_time = time(NULL);
    printf("2. time.h の機能: 現在時刻 = %ld\n", current_time);
    
    // stdlib.h + time.h の組み合わせ
    srand((unsigned int)time(NULL));
    printf("3. stdlib.h + time.h: 乱数の種を設定\n");
    
    // stdlib.h の機能
    for (int i = 0; i < 3; i++) {
        int random = rand() % 100;
        printf("4. stdlib.h の機能: 乱数 %d = %d\n", i+1, random);
    }
    
    printf("\n=== 各ヘッダーの主な関数 ===\n");
    printf("stdio.h:  printf, scanf, fopen, fclose\n");
    printf("stdlib.h: rand, srand, malloc, free, exit\n");
    printf("time.h:   time, clock, strftime\n");
    
    return 0;
} 