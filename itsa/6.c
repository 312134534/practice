//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2913
//[C_MM01-易] 計算梯型面積
#include <stdio.h>

int main()
{
    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c)!= EOF)
    {
        printf("Trapezoid area:%.1lf\n", (a + b) * c / 2);
    } 
}