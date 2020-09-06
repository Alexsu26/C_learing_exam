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

    for( int i=0; i<n; i++)
    { 
            if( i<n-i-1){
                int x = num[n-i-1];
                num[n-i-1] = num[i];
                num[i] = x;
            }
            else
                break;
    }

    for(int i=0; i<n; i++)
        printf("%d ",num[i]);
    printf("\b\n");
    return 0;
}
