//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2932
//[C_MM20-易] 十進位轉十六進位
#include <stdio.h>

int main()
{
    int n, idx = 0, trans[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
                                'A', 'B', 'C', 'D', 'E', 'F'};
    char ans[100];
    scanf("%d", &n);
    while (n)
    {
        ans[idx++] = trans[n % 16];
        n /= 16;
    }
    for(int i = idx - 1; i >= 0; i--)
    {
        printf("%c", ans[i]);
    }
}