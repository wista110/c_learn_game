#include <stdio.h>

int rect_area(int w, int h)
{
    int a = w * h;
    return a;
}

int main()
{
    int a = rect_area(200, 120);
    printf("幅200、高さ120の領土を手に入れた!\n");
    printf("その領土の面積は%dです\n", a);
}