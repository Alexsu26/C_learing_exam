#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char x;
    scanf("%c\n", &x);
    char num[80];
    gets(num);
    int flag = 0;
    int i;
    for(i=strlen(num)-1; i>=0 ; i--)
    {
        if( num[i] == x ){
            flag = 1;
            break;
        }    
    }
    if( flag )
        printf("index = %d\n",i);
    else
        printf("Not Found\n");
    return 0;
}
