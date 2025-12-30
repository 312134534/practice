//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2929
//[C_MM17-易] 求最大公因數
#include <stdio.h>

int gcd(int a, int b){return a ? gcd(b % a, a) : b;}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));
}