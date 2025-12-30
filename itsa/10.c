//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2917
//[C_MM05-易] 計算正方形面積
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;
    while (scanf("%lf", &d) != EOF)
    {
        printf("%.1lf\n", (int)(d * d * 10 + 0.5) / 10.0);

    }
    
}