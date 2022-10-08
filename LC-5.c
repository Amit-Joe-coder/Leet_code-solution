#include <stdio.h>
int main()
{
    int x, n, z;
    scanf("%d", &x);
    while (x)
    {
        scanf("%d", &n);
        if (n > 1)
        {
            if (n % 4 == 0)
            {
                z = n / 4;
                if (z % 4 == 0)
                {
                    printf("true");
                }
                else
                    printf("false");
            }
            else
                printf("false");
        }
        else
            printf("true");
        x--;
    }
}
