#include <stdio.h>

//グローバル変数の宣言
int global_ver = 0; //これがグローバル変数！（どこからでも使える）

int rect_area(int w, int h)
{
    int a = w * h; // aは「rect_area関数内の中だけ」で使える。ローカル関数
    printf("rect_area内: a = %d\n", a); //ここでは使える
    printf("rect_area内: global_ver = %d\n", global_ver);// ここでも見える
    return a;
    //printf("rect_area内: a = %d\n", a);  ←この範囲はスコープ内(aが使える)
}//ここから外はスコープ外(aが使えない)

int main()
{
    int a = rect_area(200, 120); //これはmain関数のa
    printf("main内: a = %d\n", a); //mainのaはrect_areaのaとは別物
    // printf("%d", a);  ←このmain関数内だけでつかえる
    printf("main内: global_ver = %d\n", global_ver);// グローバル変数はここでも見える
    global_ver = 999; // mainからの変更も可能
    printf("main内でglobal_verを999に変更: global_ver = %d\n", global_ver);
    return 0;
}//ここでmain関数のaも使えなくなる。（スコープ外）
// global_varだけはプログラム終了まで残る