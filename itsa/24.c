//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2931
//[C_MM19-易] 電話費計算
#include <stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);
    if(n <= 800)
    {
        n *= 0.9;
    }
    else if(n < 1500)
    {
        n *= 0.9 * 0.9;
    }
    else
    {
        n *= 0.9 * 0.79;
    }
    printf("%.1lf", n);
}