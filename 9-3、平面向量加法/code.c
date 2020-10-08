#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double x1,y1,x2,y2;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    double sum1 = x1 + x2;
    double sum2 = y1 + y2;
    if( fabs(sum1) < 0.05 )    
        sum1 = -sum1;
    if( fabs(sum2) < 0.05 )
        sum2 = -sum2;
    printf("(%.1f, %.1f)",sum1,sum2);
            
    
    return 0;
}
