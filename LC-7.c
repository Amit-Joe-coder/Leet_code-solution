#include <stdio.h>
int main()
{
    int n = 100, a1[n], i, j = 0, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a1[i] % 3 == 0)
        {
            if (a1[i] % 2 == 0)
            {
                j++;
                sum = sum + a1[i];
            }
        }
    }
    if (sum!=0)
    {
        printf("%d",sum/j);
    }
    else
        printf("0");
    
}
