#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d",&N);
    int old = 2;
    int new = 0;
    int cnt = 0;
    while( old+new != N)
    {
        if( cnt % 3 == 0)
        {
            old++;
            new--;
        }
        
    }
    return 0;
}
