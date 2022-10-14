#include <stdio.h>
int main()
{
    int size1, size2, arr1[50], arr2[50], merge[100], i, k;
    scanf("%d", &size1);
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    scanf("%d", &size2);
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    for (i = 0; i <= k; i++)
    {
        for (int j = i + 1; j <= k; j++)
        {
            if (merge[i] > merge[j])
            {
                int x = merge[i];
                merge[i] = merge[j];
                merge[j] = x;
            }
        }
    }
    for (i = 0; i < k; i++)
    {
        printf("%d,", merge[i]);
    }
}
