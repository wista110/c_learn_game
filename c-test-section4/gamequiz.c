#include <stdio.h>
#include <string.h>
int main()
{
    int score = 0;

    char quiz[5][1000] =  //[文字数+1]?
    {
        "2020年に発売され、ヒットしたNintendo Switchのゲーム「○○○○ どうぶつの森」。〇に入る言葉は？",
        "2010年代にヒットしたスマートホンのゲーム、「パズドラ」の正式名称は？",
        "2000年代にガラケーでヒットした、自転車に乗った棒人間を操作して遊ぶゲームは？",
        "1990年代にゲームセンターに設置され、ブームとなった写真シール機「プリクラ」の正式名称は？",
        "1980年代にヒットした、家庭用ゲーム機「ファミコン」の正式名称は？"
    }
    char answer[5][1000] =
    {
        "あつまれ",
        "パズル＆ドラゴンズ",
        "チャリ走",
        "プリント倶楽部",
        "ファミリーコンピュータ"
    }

    char input[5];
    
    for (int i = 0; i < 5; i++)
    {   
        printf("問%s\n" ,quiz[i]);
        scanf("%s", input); 
        if(strcmp(input, answer[i]) == 0)
        {
            printf("正解です\n");
            score++;
        }else{
            printf("不正解です 正しい答えは%sです\n", answer[i]);
        }
        
    }
}

//2025/07/18 初回の挑戦、今回はあきらめ、答えを見た。→gamequiz-A.cを作成した。