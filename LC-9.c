#include <stdio.h>
#include <stdbool.h>
// bool divisorGame(int);
int main()
{
    int n, x = 1;
    scanf("%d", &n);
    // n = n - 1;
        if (n % 2 != 0)
        {
            printf("false");
            return 0;
        }
        else
        {
            printf("true");
            return 0;
        }
        n--;
}
