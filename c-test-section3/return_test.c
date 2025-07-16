#include <stdio.h>

int main() {
    printf("このプログラムは何を返すでしょうか？\n");
    
    // 何かの処理があったとして...
    int error_occurred = 0;  // 0 = エラーなし, 1 = エラーあり
    
    if (error_occurred) {
        printf("エラーが発生しました！\n");
        return -1;  // エラー終了
    } else {
        printf("正常に処理が完了しました。\n");
        return 0;   // 正常終了
    }
} 