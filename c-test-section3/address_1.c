#include <stdio.h>
int main()
{
    int i = 0;
    char c = 'A';
    printf("変数iの値は%d、アドレスは%p\n", i, &i);
    printf("変数cの値は%c、アドレスは%p\n", c, &c);
}