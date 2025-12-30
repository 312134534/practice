//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2924
//[C_MM12-易] 相遇時間計算
#include <stdio.h>
#include <math.h>
int main()
{
    double d;
    while (scanf("%lf", &d) != EOF)
    {
       double ans = d * 100 / (100 - 30.0 * 2.54);
       printf("%d\n", (int)ceil(ans));
    }
}