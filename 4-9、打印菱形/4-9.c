#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d",&N);
    for( int i=0; i<= N/2; i++)
    {
        for ( int j=0; j<N-1-2*i ; j++)
            printf(" ");
        for( int k=0; k< 2*i+1; k++)
            printf("* ");
        printf("\n");
    }
    for( int i=1; i<N/2+1; i++)
    {
        for( int j=0; j<2*i ; j++)
            printf(" ");
        for( int k=0; k<N-2*i ; k++)
            printf("* ");
        printf("\n");
    }


    return 0;
}
