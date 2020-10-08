#include <stdio.h>
#include <string.h>
//char buf[21] = {'B','C','D','F','G','H','J','K','L','M','N','P','Q',
//'R','S','T','V','W','X','Y','Z'};
char buf[] = "BCDFGHJKLMNPQRSTVWXYZ";
int main(int argc, char const *argv[])
{
    char x;
    int count = 0;
    while( scanf("%c",&x) == 1)
    {
        if( strchr(buf,x))
            count++;
        
    }
    printf("%d\n",count);
    return 0;
}
