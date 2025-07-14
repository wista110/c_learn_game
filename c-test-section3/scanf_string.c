#define _CRT_SECURE_NO_WORNINGS
#include <stdio.h>
int main()
{
    char txt[11];
    printf("※要素数11列は半角10文字まで、全角は5文字まで代入できます\n"); //ItoTatsuya(11)でも動作するが本来は10文字+ヌル文字の11文字分のバッファが必要、バッファオーバーフローの危険性があるコード。
    printf("あなたの名前は?\n");
    scanf("%s", txt); //scanf("%10s", txt)とすることで、バッファオーバーフローを防ぐことができる。もしくは、tgetsを使用する。
    printf("%sよ、いよいよ、冒険の旅に出発じゃ！\n", txt);
}