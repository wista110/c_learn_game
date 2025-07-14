#include <stdio.h>
int main()
{
    char title[12] = "Hply Dragon";
    title[4] = '+';
    for (int i = 0; i < 11; i++)  // 11に戻すか、strlen()を使用
    printf("%c,", title[i]);
    printf("\n");
}