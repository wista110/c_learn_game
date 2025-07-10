#include <stdio.h>
int main()
{
    float f = 0.0; //floatだと小数点以下の精度が低い
    f = f + 1.234567890;
    f = f + 1.234567890;
    printf("fの値は%fです\n", f);

}