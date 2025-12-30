//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2926
//[C_MM14-易] 計算時間的組合
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d days\n", n / (24 * 60 * 60));
    n %= (24 * 60 * 60);
    printf("%d hours\n", n / (60 * 60));
    n %= (60 * 60);
    printf("%d minutes\n", n / 60);
    n %= 60;
    printf("%d seconds\n", n);
}