//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2927
//[C_MM15-易] 判斷座標是否在正方形的範圍內
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a >= 0 && a <= 100 && b >= 0 && b <= 100) printf("inside");
    else printf("outside");
}