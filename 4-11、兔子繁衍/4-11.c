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
        i++;
        if(sum>10000)
            break;
        else
            num[i] = sum;
    }while( sum<10000 );
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
