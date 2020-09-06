#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N;
    scanf("%d",&N);
    //输入
    int num[100];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }

    //找最大值
    int max = num[0];
    for(int i=0;i<N;i++)
    {
        if( num[i] > max )
            max = num[i];
    }

    //求下标
    int cnt;
    for(int i=0; i<N; i++)
    {
        if( num[i] == max )
        {
            cnt = i;
            break;
        }
    }
    printf("%d %d\n",max,cnt);
    return 0;

}
