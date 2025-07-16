#include <stdio.h>

// ===== マクロの例 =====
#define MAX_SIZE 100                    // 文字列置換
#define PI 3.14159                      // 文字列置換
#define PRINT_MSG printf("Hello!\n")    // 文字列置換
#define SQUARE(x) ((x) * (x))          // 文字列置換（引数付き）

int main() {
    printf("=== マクロとコードの違い ===\n");
    
    // ===== マクロの使用 =====
    printf("\n--- マクロの例 ---\n");
    
    // MAX_SIZE は「100」という文字列に置き換えられる
    int array[MAX_SIZE];  // int array[100]; と同じ
    printf("配列のサイズ: %d\n", MAX_SIZE);
    
    // PI は「3.14159」という文字列に置き換えられる
    double circle = PI * 10;  // double circle = 3.14159 * 10; と同じ
    printf("円周: %.2f\n", circle);
    
    // PRINT_MSG は「printf("Hello!\n")」に置き換えられる
    PRINT_MSG;  // printf("Hello!\n"); と同じ
    
    // SQUARE(5) は「((5) * (5))」に置き換えられる
    int result = SQUARE(5);  // int result = ((5) * (5)); と同じ
    printf("5の二乗: %d\n", result);
    
    // ===== 普通のコード（変数・関数）=====
    printf("\n--- 普通のコードの例 ---\n");
    
    // 変数：メモリに値を格納
    int max_size = 100;
    const double pi = 3.14159;
    
    printf("変数のサイズ: %d\n", max_size);
    printf("変数のPI: %.2f\n", pi);
    
    return 0;
}

// 普通の関数
int square_function(int x) {
    return x * x;
} 