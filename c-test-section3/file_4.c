#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main ()
{
    FILE* fp;
    fp = fopen("file_1.c", "r");
    char s[256]; //256ずつ読み込む
    while (1) //無限ループで繰り返す
    {
        char* ret = fgets(s, 256, fp);
        if (ret == NULL) break; //ファイルの終わりに達したらbreak
        printf("%s", s);
    }
    fclose(fp);
}