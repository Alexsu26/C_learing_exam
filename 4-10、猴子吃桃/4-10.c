#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d",&N);
    int left = 1;
    for(int i=1; i<N;i++){
        left = (left + 1)*2; 
    }
    printf("%d\n",left);

    return 0;
}