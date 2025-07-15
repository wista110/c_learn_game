#include <stdio.h>
#include <string.h>

int main() {
    // ポインタ（読み取り専用）
    char *pointer_name = "マーズ";
    
    // 配列（書き換え可能）
    char array_name[20] = "マーズ";  // サイズを20に拡大
    
    printf("=== 初期状態 ===\n");
    printf("ポインタ: %s\n", pointer_name);
    printf("配列: %s\n", array_name);
    
    printf("\n=== メモリサイズ ===\n");
    printf("ポインタのサイズ: %zu バイト\n", sizeof(pointer_name));
    printf("配列のサイズ: %zu バイト\n", sizeof(array_name));
    
    printf("\n=== 書き換えテスト ===\n");
    
    // ポインタの場合：新しい文字列を指すことは可能
    pointer_name = "ジュピター";
    printf("ポインタ（新しい文字列）: %s\n", pointer_name);
    
    // 配列の場合：strcpyで内容をコピー
    strcpy(array_name, "ジュピター");
    printf("配列（内容変更）: %s\n", array_name);
    
    // 文字列配列の例
    printf("\n=== 文字列配列の比較 ===\n");
    
    // ポインタ配列（効率的）
    char *jobs_ptr[] = {"勇者", "戦士", "僧侶", "魔術師"};
    
    // 2次元配列（固定サイズ）
    char jobs_arr[][10] = {"勇者", "戦士", "僧侶", "魔術師"};
    
    printf("ポインタ配列のサイズ: %zu バイト\n", sizeof(jobs_ptr));
    printf("2次元配列のサイズ: %zu バイト\n", sizeof(jobs_arr));
    
    return 0;
} 