//https://etutor2.itsa.org.tw/mod/topics/view.php?id=659
//[C_AR03-易] 計算陣列中所有元素的立方和
#include <stdio.h>

int main()
{
    long long n, sum = 0;
    for(int i = 0; i < 6; i++)
    {
        scanf("%lld", &n);
        sum += n * n * n;
    }
    printf("%lld", sum);
}