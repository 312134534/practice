//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2925
//[C_MM13-易] 停車費計算
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    b += a * 60;
    int c, d;
    scanf("%d %d", &c, &d);
    d += c * 60;
    d -= b;
    if(d <= 2 * 60)
    {
        printf("%d", d / 30 * 30);
    }
    else if(d <= 4 * 60)
    {
        printf("%d", 4 * 30 + (d - 120) / 30 * 40);
    }
    else
    {
        printf("%d", 4 * 30 + 4 * 40 + (d - 240) / 30 * 60);
    }
}