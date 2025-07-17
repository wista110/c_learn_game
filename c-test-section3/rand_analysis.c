#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // 毎回異なる乱数
    
    int count_1digit = 0;   // 1桁（0-9）
    int count_2digit = 0;   // 2桁（10-99）
    int count_3digit = 0;   // 3桁（100以上）- これは0になるはず
    
    printf("=== 1000回の乱数生成結果 ===\n");
    printf("最初の20個の例:\n");
    
    for (int i = 0; i < 1000; i++) {
        int r = rand() % 100;
        
        // 最初の20個だけ表示
        if (i < 20) {
            printf("%2d ", r);
            if ((i + 1) % 10 == 0) printf("\n");
        }
        
        // 桁数カウント
        if (r >= 0 && r <= 9) {
            count_1digit++;
        } else if (r >= 10 && r <= 99) {
            count_2digit++;
        } else if (r >= 100) {
            count_3digit++;
        }
    }
    
    printf("\n\n=== 結果分析 ===\n");
    printf("1桁（0-9）  : %d回 (%.1f%%)\n", count_1digit, count_1digit / 10.0);
    printf("2桁（10-99） : %d回 (%.1f%%)\n", count_2digit, count_2digit / 10.0);
    printf("3桁（100以上）: %d回 (%.1f%%)\n", count_3digit, count_3digit / 10.0);
    
    printf("\n=== 範囲確認 ===\n");
    printf("rand() %% 100 の範囲: 0 ～ 99\n");
    printf("理論的に3桁以上は出現しません\n");
    
    return 0;
} 