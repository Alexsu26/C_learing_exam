#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int num[10][10];
    int i,j;
    //输入
    for(i=0;i<n;i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    //计算
    int sum = 0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if( i+j==n-1 || i==n-1 || j==n-1 )
                continue;
            else
                sum += num[i][j];
        }
    }

    printf("%d\n",sum);
    return 0;
}
