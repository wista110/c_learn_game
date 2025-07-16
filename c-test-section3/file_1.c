#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char filename[][16] = {"勇者","神官","魔法使い"};
    FILE* fp;
    fp = fopen("save_data.txt", "w");
    if (fp ==NULL)
    {
        printf("ファイルを開くことができません");
        return -1;
    }
    for (int i =0; i<3; i++) fprintf(fp, "%s\n", filename[i]);
    fclose(fp);
    printf("ファイルに書き込みました");
}