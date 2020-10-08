#include <stdio.h>
#include <string.h>
struct price
{
    double bp;
    char *name;
}book;


int main(int argc, char const *argv[])
{
    char x;
    char *name;
    int i=0;
    do
    {
        x = getchar();
        name[i++] = x;
    } while (x != '\n');
    printf("%s",name);
    return 0;
}
