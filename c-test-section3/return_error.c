#include <stdio.h>

int main() {
    printf("このプログラムはエラーを返します\n");
    
    // 何かの処理があったとして...
    int error_occurred = 1;  // エラーを発生させる
    
    if (error_occurred) {
        printf("エラーが発生しました！\n");
        return -1;  // エラー終了
    } else {
        printf("正常に処理が完了しました。\n");
        return 0;   // 正常終了
    }
} 