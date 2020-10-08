#include <stdio.h>
#include <string.h>
struct price
{
    double bp;
    char *name;
}book;


int main(int argc, char const *argv[])
{
    double max = -9999999.0;
    double min = 99999999.0;
    char* maxname;
    char* minname;
    int N = 3;
    scanf("%d",&N);
    while (N--)
    {
        scanf("%[^\n]",book.name);
        // scanf("%lf",&book.bp);
        if( book.bp > max )
        {
            max = book.bp;
            maxname = book.name;
        }
        if (book.bp < min )
        {
            min = book.bp;
            minname = book.name;
        }
    }
    printf("%.2f, %s\n",max,maxname);
    printf("%.2f, %s\n",min,minname);
    

    return 0;
}
