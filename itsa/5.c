//https://etutor2.itsa.org.tw/mod/topics/view.php?id=940
//[C_AR05-易] 最少派車數
#include <stdio.h>

int main()
{
    int n, arr[25] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a]++;
        arr[b]--;
    }
    int now = 0, max = 0;
    for(int i = 0; i < 25; i++)
    {
        now += arr[i];
        if(now > max) max = now;
    }
    printf("%d", max);
}