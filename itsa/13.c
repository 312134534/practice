//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2920
//[C_MM08-易] 計算兩數和的平方值
#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", (a + b) * (a + b));

    }
}