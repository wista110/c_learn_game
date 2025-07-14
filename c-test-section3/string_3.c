#include <stdio.h>
int main()
{
    char monster[3][10] = {"Slime", "Ghost", "Vampire"};
    for (int i = 0; i < 3; i++)
    {
        printf("敵%dの名前は「%s」\n", i+1, monster[i]);
    }
}