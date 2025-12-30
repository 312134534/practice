//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2930
//[C_MM18-易] 十進制轉二進制
#include <stdio.h>

int gcd(int a, int b){return a ? gcd(b % a, a) : b;}

int main()
{
    int a;
    scanf("%d", &a);
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (a & (1 << i)) > 0);
    }
}