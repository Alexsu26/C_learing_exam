#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int num[10];
    for(int i=0; i<n; i++)
        scanf("%d",&num[i]);
    
    int cnt = 0;
    int i;
    int flag=0;
    while(cnt < n ){
        int max = num[0];
        for(i=1; i<n; i++){
            if( num[i] > max ){
                max = num[i];
                flag = i;
            }
        }
        if( cnt == n-1 )
        {
            printf("%d\n",max);
            cnt++;
        }
        else
        {
            printf("%d ",max);
            num[flag] = -999;
            cnt++;  
        }
    }
    return 0;
}
