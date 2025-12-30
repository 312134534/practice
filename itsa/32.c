//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2941
//[C_MM29-易] 最大質數問題
#include <stdio.h>
int prim[1000000] = {0};
int main()
{
    int n;
    scanf("%d", &n);
    prim[0] = 1;
    prim[1] = 1;
    for(int i = 2; i * i <= n; i++)
    {
        if(prim[i] == 0)
        {
            for(int j = i + i; j <= n; j+=i)
            {
                prim[j] = 1;
            }
        }
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(prim[i] == 0) 
        {
            printf("%d", i);
            break;
        }
    }
}