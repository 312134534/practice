//https://etutor2.itsa.org.tw/mod/topics/view.php?id=658
//[C_AR02-易] 一維陣列反轉 II
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int arr[1000], idx = 0;
    while(scanf("%d", &arr[idx]) != EOF)
    {
        idx++;
    }
    for(int i = idx - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }



	return 0;
}