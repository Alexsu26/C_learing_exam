#include <stdio.h>

#define maxn 100000

int main(int argc, char const *argv[])
{
    int num[maxn];
    num[1] = 1;
    num[2] = 1;
    int i = 3;
    int sum;
    do
    {
        sum = num[i-2] + num[i-1];
        num[i++] = sum;
    }while( sum<20000 );
    
    for(i=0;i<10000;i++)
    {
        if(num[i])
            printf("i=%d,num[i]=%d\n",i,num[i]);
    }

    int N;
    scanf("%d",&N);
    for(i=0;i<maxn;i++)
    {
        if(N <= num[i])
        {
            printf("%d\n",i);
            break;
        }
    }
            
    
     
    return 0;
}
