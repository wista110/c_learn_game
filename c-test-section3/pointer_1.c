#include <stdio.h>
int main()
{
    int i = 0;
    int* p = &i;
    printf("iの初期値は%d、pの値は%p\n",i,p);
    *p = 777;
    printf("*p=777とすると、iの値は%dになる\n", i);
}