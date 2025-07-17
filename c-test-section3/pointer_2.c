#include <stdio.h>
int main()
{
    int lank[3] = { 10, 20, 30 };
    int* p = lank+
    printf("lank[2]の値は%d\n", lank[2]);
    printf("*(p+2)の値は%d\n", *(p + 2));
    *(p + 2) = *(p + 2) + 10;
    printf("変更したlank[2]の値は%d\n", lank[2]);
}