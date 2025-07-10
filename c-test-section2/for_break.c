#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 6) break;
        if (i > 0) printf("→"); //iが0のときは→を出力しない。「0→」　ではなく　「→0」になる
        printf("%d", i);
    }
    printf("\n");
}