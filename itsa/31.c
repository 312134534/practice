//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2940
//[C_MM28-易] 計算1到N之間屬於5和7的倍數
#include<stdio.h>

int main()
{
    int n, c = 35;
    scanf("%d", &n);
    while (c <= n)
    {
        printf("%d ", c);
        c += 35;
    }
    
}