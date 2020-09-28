//-xABCDEF1234567890#
#include <stdio.h>
#include <string.h>
char buf[] = "-xXABCDEF1234567890";
int main(int argc, char const *argv[])
{
    char num[85];
    char x;
    int i = 0;
    int flag = 0;
    do
    {
        scanf("%c",&x);
        if( strchr(buf,x) )
        {
            if( strchr(num,'-') && x=='-')
                continue;
            else
            {
                if( num[i-1] == '-' )
                    num[i] = '0';
                num[i++] = x;
            }
            
        }
    }while( x != '#');
    printf("%s",num);
    return 0;
}
