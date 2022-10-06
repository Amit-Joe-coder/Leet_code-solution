/*
Problem
Write a program to find the factorial value of any number entered by the user.
*/
#include <stdio.h>
int main()
{
    int z, n, i, x = 1;
    scanf("%d", &z);
    while (z)
    {
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            x = x * i;
        }
        printf("%d ", x);
        x = 1;
    }
    z--;
    return 0;
}
