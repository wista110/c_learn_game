#include <stdio.h>
int main()
{
    int money = 1000;
    double gold = 100;
    printf("報酬は%d円です\n", money);
    printf("報酬は%fゴールドです\n", gold);
    money = money / 3;
    gold = gold / 3;
    printf("3人で分けると、%d円と%fゴールドになります\n", money, gold);
    //小数点は無限に保持されるわけではない。
}