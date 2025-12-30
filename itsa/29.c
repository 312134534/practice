//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2938
//[C_MM26-易] 輸出 1*1、2*2、...、N*N之結果
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
    {
        printf("%d*%d=%d\n", i, i, i * i);
    }
}