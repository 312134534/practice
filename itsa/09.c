//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2916
//[C_MM04-易] 計算總和、乘積、差、商和餘數
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld+%lld=%lld\n", a, b, a + b);
    printf("%lld*%lld=%lld\n", a, b, a * b);
    printf("%lld-%lld=%lld\n", a, b, a - b);
    printf("%lld/%lld=%lld...%lld\n", a, b, a / b - (a % b < 0) * b / abs(b) , a % b < 0 ? a % b + (b > 0 ? b : -b) : a % b);
}