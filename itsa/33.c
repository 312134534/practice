//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2942
//[C_MM30-易] 質數判別
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}