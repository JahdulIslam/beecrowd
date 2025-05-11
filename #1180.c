#include <stdio.h>

int main()
{
    int n, i, j, min, pos;
    scanf("%d", &n);
    int x[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    min = x[0];
    for (j = 0; j < n; j++)
    {
        if (x[j] < min)
        {
            min = x[j];
            pos = j;
        }
    }
    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", pos);
    return 0;
}
