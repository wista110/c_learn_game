#include <stdio.h>
int main()
{
    char title[12] = "doragonquest"; //doragon quest スペースを入れると13文字をなりエラーになる
    printf("このゲームのタイトルは「%s」です\n", title);
    return 0;
}