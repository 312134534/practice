//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2921
//[C_MM09-易] 計算 i 次方的值
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    while (scanf("%d", &i) != EOF)
    {
        if(i > 31) printf("Value of more than 31\n");
        else printf("%d\n", (int)pow(2, i));

    }
}