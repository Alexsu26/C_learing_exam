#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m,n;
    scanf("%d %d",&m,&n);
    int num[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d",&num[i][j]);
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += num[i][j];
        }
        printf("%d\n",sum);
    }
        return 0;
}
