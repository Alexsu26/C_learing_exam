#include <stdio.h>
#include <string.h>
struct price
{
    double bp;
    char name[35];
}book[10];


int main(int argc, char const *argv[])
{
    double max = -9999999.0;
    double min = 99999999.0;
    int maxflag = 0;
    int minflag = 0;
    int N;
    scanf("%d",&N);
    getchar();
    for(int i=0; i<N; i++)
    {
        // scanf("\n");
        gets(book[i].name);

        scanf("%lf",&book[i].bp);
        getchar();

        if (book[i].bp > max)
        {
            maxflag = i;
            max = book[i].bp;
        }
        if (book[i].bp < min)
        {
            minflag = i;
            min = book[i].bp;
        }

    }

    // int maxflag = 0;
    // int minflag = 0;
    // for( int i=0; i<N; i++)
    // {
    //     if (book[i].bp > max)
    //     {
    //         maxflag = i;
    //         max = book[i].bp;
    //     }
    //     if (book[i].bp < min)
    //     {
    //         minflag = i;
    //         min = book[i].bp;
    //     }
    // }
    printf("%.2f, %s\n",book[maxflag].bp,book[maxflag].name);
    printf("%.2f, %s\n",book[minflag].bp,book[minflag].name);
    

    return 0;
}
