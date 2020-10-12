#include <stdio.h>
#include <string.h>

struct string
{
    char str[85];
}list[5];


int main(int argc, char const *argv[])
{
    for(int i=0;i<5;i++)
    {
        scanf("%s",list[i].str);
    }

    for(int j=0;j<5;j++)
    {
        int flag = 0;
        char temp[85] = "zzzzzzzz";
        for(int i=0;i<5;i++)
        {
            if(list[i].str < temp)
            {
                flag = i;
                strcpy(temp,list[i].str);
            }
        }
        printf("%s\n",list[flag].str);
        memset(list[flag].str,'z',sizeof(list[flag].str));
    }
    

     
    

    
    
    return 0;
}
