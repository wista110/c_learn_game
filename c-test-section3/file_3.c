#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char put_string[] = "勇者よ、いざ冒険の旅へ！旅路は険しいものになると思うが、健闘を祈る";
    char get_string[100];
    FILE* fp;
    fp = fopen("adventuer.txt", "w");
    if (fp == NULL)
    {
        printf("ファイルを開くことができません");
        return -1;
    }
    fputs(put_string, fp); //文字列の書き込み
    fclose(fp);

    fp = fopen("adventuer.txt", "r");
    if (fp == NULL)
    {
        printf("ファイルを開くことができません");
        return -1;
    }
    fgets(get_string, 100, fp); //文字列の読み込み
    fclose(fp);
    printf("%s", get_string);
}