/*Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.*/
#include <stdio.h>
int addDigits(int);
int main()
{
    int x;
    printf("Enter any 2 digit number: ");
    scanf("%d", &x);
    printf("%d", addDigits(x));
}
int addDigits(int x)
{
    while (x > 9)
    {
        int i, y;
        i = x % 10;
        y = i;
        i = x / 10;
        x = y + i;
    }
    return x;
}