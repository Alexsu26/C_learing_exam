//-xABCDEFabcdef1234567890#
#include <stdio.h>
#include <string.h>
#include <math.h>
char buf[] = "-ABCDEFabcdef1234567890";
int main(int argc, char const *argv[])
{
    char num[85] = "";
    char x;
    int i = 0;
    int flag = 1;
    //读入字符串，不存储0x字符
    do
    {
        scanf("%c",&x);
        if( strchr(buf,x))
        {
            if( x == '-')
            {
                if( strlen(num) ==0 )
                    flag = 0;
            }    
            else
                num[i++] = x;
        }
    }while( x != '#');

    //转换为16进制
    int res[strlen(num)];
    int len = 0;
    for( int j=0; j<strlen(num); j++)
    {
        if(num[j]>='a' && num[j]<='f')
        {
            res[j] = num[j] -'a' + 10;
            len++;
            continue;
        }    
        else if(num[j]>='A' && num[j]<='F')
        {
            res[j] = num[j] - 'A' +10;
            len++;
            continue;
        }
        else
        {
            res[j] = num[j] - '0';
            len++;
            continue;
        }
    }
    // for(int j=0; j<len;j++)
    //     printf("%d ",res[j]);
    for( int j=0; j<len; j++)
    {
        res[len-j-1] *= (int)pow(16.0,j);
    }

    int sum = 0;
    for(int j=0;j<len; j++)
        sum += res[j];
    if( !flag )
        sum *= (-1);

    printf("%d\n",sum);

    return 0;
}
