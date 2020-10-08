#include <stdio.h>
int main(int argc, char const *argv[])
{
    double x1,y1,x2,y2;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    printf("(%.1f, %.1f)\n",x1+x2,y1+y2);    
    return 0;
}
