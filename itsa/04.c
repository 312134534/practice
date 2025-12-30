//https://etutor2.itsa.org.tw/mod/topics/view.php?id=939
//[C_AR04-易] 邊緣偵測
#include <stdio.h>
int map[200][200];
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
void solve()
{
    int n, m;
    char ans[200][200];
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int flag = 0;
            if(map[i][j])
            {
                for(int k = 0; k < 4; k++)
                {
                    int ni = i + dx[k], nj = j + dy[k];
                    if(ni < n && ni >= 0 && nj < m && nj >= 0 && map[ni][nj] == 0)
                    {
                        flag = 1;
                    }
                }
            }
            ans[i][j] = flag ? '0' : '_';
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%c ", ans[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        solve();
    }
    return 0;
}