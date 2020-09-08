#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m, n;
    scanf("%d %d", &m, &n);
    int num[6][6];
    int mid[6];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", num[i][j]);
        }
    }

    //存储提到前面的值
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0, k = 0; j < n; j++)
        {
            if (j < m)
            {
                mid[k++] = num[i][j];
            }
            else
            {
                num[i][j] = num[i][l++];
            }
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            printf("%d", num[i][j]);
    return 0;
}
