//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2939
//[C_MM27-易] 計算兩整數間所有整數的總和
#include <stdio.h>

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", (a + b) * (b - a + 1) / 2);
}