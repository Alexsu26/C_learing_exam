#include <stdio.h>
int main(int argc, char const *argv[])
{
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    int plus;
    scanf("%d",&plus);
    s += plus;
    if (s>=60)
    {
        s -= 60;
        m +=1;
    }
    if (m>=60)
    {
        m -= 60;
        h += 1;
    }
    if(h>=24)
    {
        h -= 24;
    }
    printf("%02d:%02d:%02d\n",h,m,s);
    
    
    return 0;
}
