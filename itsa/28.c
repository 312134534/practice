//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2937
//[C_MM25-易] 計算正整數被3整除之數值之總和
#include <stdio.h>

int main()
{
    long long n, ans = 0, t = 3;
    scanf("%lld", &n);
    while (t <= n)
    {
        ans += t;
        t += 3;
    }
    printf("%lld", ans);
}