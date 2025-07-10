#include <stdio.h>
int main()
{
    int a = 10;
    int b = 4;
    double c = a / b; //int同士で計算してからdoubleに変換　×
    double d = (double)a / b; //intをdoubleに変換してから計算　〇
    double e = a / (double)b; //intをdoubleに変換してから計算　〇
    double f = (double)(a / b); //a/bをdoubleに変換　×
    double g = (double)a / (double)b; //intをdoubleに変換してから計算　〇
    printf("aの値は%dです\n", a);
    printf("bの値は%dです\n", b);
    printf("cの値は%fです\n", c);
    printf("dの値は%fです\n", d);
    printf("eの値は%fです\n", e);
    printf("fの値は%fです\n", f);
    printf("gの値は%fです\n", g);

}