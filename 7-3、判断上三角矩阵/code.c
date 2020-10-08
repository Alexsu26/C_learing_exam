#include <stdio.h>

int main(int argc, char const *argv[])
{
    int T;
    scanf("%d",&T);
    int n;
    while(T--)
    {
        scanf("%d",&n);
        int num[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf("%d",&num[i][j]);
        int flag = 1;
        for(int i=1;i<n;i++)
            for(int j=0;j<i;j++)
                if(num[i][j] != 0)
                    flag = 0;
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
