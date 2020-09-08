#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num[6][6];
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=0; i<n; i++)
        for(int j=0;j<n ; j++)
            scanf("%d",&num[i][j]);
    m = m%n;//重要

    for(int i=0; i<n; i++)
    {
        for( int j=n-m; j<n; j++)
            printf("%d ",num[i][j]);
        for( int j=0; j<n-m; j++)
            printf("%d ", num[i][j]);
        printf("\n");
    }
    return 0;
}
