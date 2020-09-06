#include <stdio.h>

int inNum(int *a, int len, int x);

int main(int argc, char const *argv[])
{
    int x, y;
    int num1[20], num2[20];
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
        scanf("%d", &num1[i]);
    scanf("%d", &y);
    for (int i = 0; i < y; i++)
        scanf("%d", &num2[i]);

    int res[20], cnt = 0;
    int i, j;
    //检查
    for (j = 0; j < y; j++)
    {
        for (i = 0; i < x; i++)
        {
            if (num1[i] == num2[j])
                break;
        }
        if (i == x)
        {
            if (inNum(res, cnt, num1[i]))
                break;
            else
            {
                res[cnt] = num1[i];
                cnt++;
            }
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (num2[j] == num1[i])
                break;
        }
        if (j == y)
        {
            if (!inNum(res, cnt, num2[j]))
            {
                res[cnt] = num1[i];
                cnt++;
            }
        }
    }
    for (i = 0; i < cnt; i++)
        printf("%d ", res[i]);
    return 0;
}

int inNum(int *a, int len, int x)
{
    int res = 0;
    for (int i = 0; i < len; i++)
    {
        if (*(a + i) == x)
            res = 1;
    }
    return res;
}