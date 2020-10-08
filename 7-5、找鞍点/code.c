#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int num[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &num[i][j]);

    for (int i = 0; i < n; i++)
    {
        int max = 0, line = 0, flag = 1;
        for (int j = 0; j < n; j++)
            if (max <= num[i][j])
            {
                max = num[i][j];
                line = j;
            }
        for (int k = 0; k < n; k++)
            if (max > num[k][line])
            {
                flag = 0;
                break;
            }
        if (flag)
        {
            printf("%d %d\n", i, line);
            break;
        }
        if (i == n - 1 && !flag)
            printf("NONE\n");
    }
    return 0;
}
