#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 5; i++) //(int i = 0; i < 5; i++) でもok
    printf("敵%dがあらわれた\n", i);
}