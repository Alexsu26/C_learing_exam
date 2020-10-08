#include <stdio.h>
#include <string.h>

char orin[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char chan[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

int main(int argc, char const *argv[])
{
    char x;
    while( scanf("%c",&x) == 1){
        if( x =='\n')
            break;
        int flag = 0;
        for(int i=0; i<strlen(orin); i++){
            if(orin[i] == x){
                printf("%c",chan[i]);
                flag = 1;
            }
        }
        if(!flag)
            printf("%c",x);
    }
    printf("\n");
    return 0;
}
