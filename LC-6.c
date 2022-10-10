#include <stdio.h>
#include <stdbool.h>
bool power(int);
int main()
{
    int t, x;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d", &x);
        int n = power(x);
        if (n == 1)
        {
            printf("true");
        }
        else
            printf("false");
        t--;
    }
}
bool power(int n)
{
    long x = 1;
    while (x <= n)
    {
        if (x != n)
            x = x * 3;
        else
            return true;
    }
    return false;
}
