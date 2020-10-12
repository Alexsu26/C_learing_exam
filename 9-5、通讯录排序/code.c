#include <stdio.h>
#include <string.h>

struct people
{
    char name[15];
    int age;
    char tel[25];
}src[15],temp;


int main(int argc, char const *argv[])
{
    int N;
    int i,j;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%s %d %s",src[i].name,&src[i].age,src[i].tel);
    }
    
    //找到顺序
    // int T = N;
    // while(T--)
    // {
    //     int flag = 0;
    //     int max = 9999;
    //     for(int i=0;i<N;i++)
    //     {
    //         if(src[i].age/10000 < max )
    //         {
    //             flag = i;
    //             max = src[i].age/10000;
    //         }
    //     }
    //     printf("%s %d %s\n",src[flag].name,src[flag].age,src[flag].tel);
    //     src[flag].age = 99990000;
    // }
    
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(src[j].age > src[j+1].age)
            {
                // struct people temp;
                temp = src[j];
                src[j] = src[j+1];
                src[j+1] = temp;
            }
        }
    }
    for(i=0;i<N;i++)
        printf("%s %d %s\n",src[i].name,src[i].age,src[i].tel);
    return 0;
}
