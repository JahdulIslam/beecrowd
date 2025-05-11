#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int square[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i + j == n - 1)
                {
                    square[i][j] = 2;
                }
                else if (i == j)
                {
                    square[i][j] = 1;
                }
                else
                {
                    square[i][j] = 3;
                }
                printf("%d", square[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
