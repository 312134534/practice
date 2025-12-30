//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2923
//[C_MM11-易] 購票計算
#include <stdio.h>
#include <math.h>
int main()
{
    int d;
    while (scanf("%d", &d) != EOF)
    {
        printf("NT10=%d\n", d / 10);
        d %= 10;
        printf("NT5=%d\n", d / 5);
        d %= 5;
        printf("NT1=%d\n", d);
    }
}