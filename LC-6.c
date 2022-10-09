#include <stdio.h>
int main()
{
    int t, x;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d", &x);
        if (x > 1)
        {
            while (x % 3 == 0)
            {
                x = (x / 3);
            }

            if (x == 1)
            {
                printf("true\n");
            }
            else
                printf("false\n");
        }
        else
            printf("false\n");
        t--;
    }
}
