#include <stdio.h>
int main()
{
    char job[][10] = {"勇者","戦士","僧侶","魔術師","踊り子",};
    for (int i = 0; i < 5; i++) printf("職業%dは%sです\n", i+1, job[i]);
}