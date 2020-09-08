#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char num[5];
    gets(num);
    char x;
    scanf("%c",&x);
    int flag = 0;
    int i;
    printf("strlen(num)=%d\n",strlen(num));
    printf("num[4]=%c\n",num[4]);
    printf("x=%c\n",x);
    int y=12;
    printf("&x=%p ' '=%p\n",&x,&y);
    printf("%d\n",num[4]==x);
    // // for (i = strlen(num) - 1; i >= 0; i--)
    // // {
    // //     if (num[i] == x)
    // //     {
    // //         flag = 1;
    // //         break;
    // //     }
    // // }
    // if (flag)
    //     printf("index = %d\n", i);
    // else
    //     printf("Not Found\n");
    return 0;
}
