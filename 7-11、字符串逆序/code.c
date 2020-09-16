#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[80];
    char ch;
    int cnt = 0;
    ch = getchar();
    do{
        str[cnt] = ch;
        cnt++;
        ch = getchar();

    }while( ch != '\n');
    
    for(int i=cnt-1; i>=0; i--)
        printf("%c",str[i]);
    printf("\n");
    return 0;
}
