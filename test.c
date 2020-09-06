#include <stdio.h>
int main(int argc, char const *argv[])
{
    char x;
    int num = 0, word = 0;
    do
    {
        scanf("%c", &x);
        if (x != ' ')
        {
            word = 1;
            continue;
        }
        else if (word)
        {
            num += 1;
            word = 0;
        }

    } while (x != '\n');
    if (word)
        num += 1;
    printf("%d\n", num);
    return 0;
}
