#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int num[10];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for( int i=n-1; i>-1; i--)
    {
        if( i == 0 )
            printf("%d\n",num[i]);
        else
            printf("%d ",num[i]);
    }
    return 0;
}
