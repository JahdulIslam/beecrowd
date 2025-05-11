#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            printf("%d ", a);
        }
        else
        {
            printf("%d", a);
        }
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
