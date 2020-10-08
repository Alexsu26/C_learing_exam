#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N;
    scanf("%d",&N);
    int num = N;
    double sum = 0.0;
    double max = -100000000;
    double min = 1000000000;
    int x;
    while(N--){
        scanf("%d",&x);
        sum += x;
        if( x > max )
            max = x;
        if( x < min )
            min = x;
    }
    printf("average = %.2f\nmax = %.2f\nmin = %.2f\n",sum/num,max,min);
    return 0;
}