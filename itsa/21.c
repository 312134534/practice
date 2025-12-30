//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2928
//[C_MM16-易] 判斷座標是否在圓形的範圍內
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a * a + b * b <= 40000) printf("inside");
    else printf("outside");
}