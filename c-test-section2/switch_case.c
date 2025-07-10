#include <stdio.h>
int main()
{
    int scene = 2;
    printf("変数sceneの値は%dです\n", scene);
    switch (scene)
    {
    case 1:
        printf("タイトル画面の処理を行います\n");
        break;
    case 2:
        printf("移動画面の処理を行います\n"); //break;　←がないと次のcaseも実行される
    case 3:
        printf("戦闘画面の処理を行います\n");
        break;
    default:
        printf("エラーです。1～3以外の値が入力されました\n");
        break;
    }
}