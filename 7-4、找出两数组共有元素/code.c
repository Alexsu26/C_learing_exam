#include <stdio.h>

int inNum(int *a,int len,int x);

int main(int argc, char const *argv[])
{
    int x,y;
    int num1[20],num2[20];
    scanf("%d",&x);
    for( int i=0; i<x; i++)
        scanf("%d",&num1[i]);
    scanf("%d",&y);
    for( int i=0; i<y; i++)
        scanf("%d",&num2[i]);
    
    int res[40],cnt=0;
    int i,j;
    //检查
    for(i=0; i<x ;i++)
    {
        for(j=0; j<y ;j++)
        {
            if(num2[j] == num1[i])
                break;
        }
        if( j==y )
        {
        if ( !inNum(res,cnt,num1[i]))
        {
            res[cnt++] = num1[i];
        }
        }
    }

    for (j = 0; j < y; j++)
    {
        for (i = 0; i < x; i++)
        {
            if (num1[i] == num2[j])
                break;
        }
        if (i == x)
        {
            if (!inNum(res, cnt, num2[j]))
                res[cnt++] = num2[j];//参照博客改为res[cnt++]格式
        }
    }

    //输出
    for(i=0; i<cnt; i++)
    {
        if( i!= cnt-1 )
            printf("%d ",res[i]);
        else
            printf("%d\n",res[i]);
    }
    return 0;
}

int inNum(int *a,int len,int x)
{
    int res = 0;
    for(int i=0; i<len ;i++)
    {
        if( *(a+i) == x )
            res = 1;
    }
    return res;
}