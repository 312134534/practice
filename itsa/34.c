//https://etutor2.itsa.org.tw/mod/topics/view.php?id=2944
//[C_MM32-易] Armstrong數
#include <stdio.h>

int main()
{
    char s[4];
    scanf("%s", s);
    int a = s[0] - '0';
    int b = s[1] - '0';
    int c = s[2] - '0';
    if(a * a * a + b * b * b + c * c * c == a * 100 + b * 10 + c) printf("Yes");
    else printf("No");
}