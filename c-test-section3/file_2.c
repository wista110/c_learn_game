
#include <stdio.h>
int main()
{
    char data[3][16];
    FILE* fp;
    fp = fopen("save_data.txt", "r");
    if (fp == NULL)
    {
        printf("ファイルを開けません");
        return -1;
    }
    for (int i = 0; i < 3; i++) fscanf(fp, "%s", data[i]);
    fclose(fp);
    for (int i = 0; i < 3; i++) printf("%s\n", data[i]);

}