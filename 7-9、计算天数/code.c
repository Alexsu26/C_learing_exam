#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year,month,day;
    scanf("%d/%d/%d",&year,&month,&day);
    int sum = 0;
    int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if( year%4==0 && year%100!=0 || year%400==0 )
        a[2] = 29;
    for( int i=1; i<month; i++)
        sum += a[i];
    sum += day;
    printf("%d\n",sum);
    
    return 0;
}
