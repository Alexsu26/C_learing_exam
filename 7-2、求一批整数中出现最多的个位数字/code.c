#include <stdio.h>
#include <string.h>
#define maxn 1000000
int count[10];
int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    char num[maxn];
    memset(count, 0, sizeof(count));
    while (N--)
    {
        scanf("%s", num);
        for (int i = 0; i < strlen(num); i++)
        {
            int x = num[i] - '0';
            count[x]++;
        }
    }
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > max)
            max = count[i];
    }
    printf("%d:", max);
    for (int i = 0; i < 10; i++)
        if (max == count[i])
            printf(" %d", i);
    printf("\n");
    return 0;
}
