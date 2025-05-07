#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {   
                arr[i][j] = abs(i - j) + 1;
                if (j == 0)
                {
                    printf("%3d", arr[i][j]);
                }
                else
                {
                    printf(" %3d", arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
