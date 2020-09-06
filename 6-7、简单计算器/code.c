#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num,ret=1;
    double res = 0.0;
    char f;
    scanf("%d",&num);
    scanf("%c",&f);
    res = num;
    while( f != '=' )
    {
        scanf("%d",&num);
        switch ( f )
        {
        case '+':
            res += num;
            break;
        case '-':
            res -= num;
            break;
        case '*':
            res *= num;
            break;
        case '/':
            if( num == 0 )
            {    ret = 0;
            }
            else{
                res /= num;
            }
            break;
        default:
            ret = 0;
            break;
        }
    scanf("%c",&f);
    }
    if( ret )
        printf("%.0lf\n",res);
    else
        printf("ERROR\n");


    return 0;
}
