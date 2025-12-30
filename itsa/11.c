//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2918
//[C_MM06-易] 英哩轉公里
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;
    while (scanf("%lf", &d) != EOF)
    {
        printf("%.1lf\n", (int)(d * 1.6 * 10 + 0.5) / 10.0);

    }
    
}