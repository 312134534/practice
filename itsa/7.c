//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2914
//[C_MM02-易] 計算三角形面積
#include <stdio.h>

int main()
{
    double a, b;
    while(scanf("%lf %lf", &a, &b)!= EOF)
    {
        printf("%.1lf\n", (a * b) / 2.0);
    } 
}