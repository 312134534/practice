//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2922
//[C_MM10-易] 攝氏溫度轉華式溫度
#include <stdio.h>
#include <math.h>
int main()
{
    int d;
    while (scanf("%d", &d) != EOF)
    {
        printf("%.1lf\n", (int)((d / 5.0 * 9 + 32) * 10 + 0.5) / 10.0);
    }
}