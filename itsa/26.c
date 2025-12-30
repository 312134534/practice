//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2933
//[C_MM21-易] 算階乘
#include <stdio.h>

int main()
{
   long long n, ans = 1;
    scanf("%lld", &n);
    while (n--)
    {
        ans *= (n + 1);
    }
    printf("%lld", ans);
}