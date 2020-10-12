#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char x;
    char name[65];
    name[65] = getline();
    scanf("%c",&x);
    printf("%s\n",name);
    printf("%c\n",x);

    return 0;
}