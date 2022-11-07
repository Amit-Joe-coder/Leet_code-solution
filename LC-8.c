#include <stdio.h>
int main()
{
    int nums[100], numsSize, i, j, maj, count;
    scanf("%d", &numsSize);
    for (i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }
    maj = nums[0];
    count = 1;
    for (i = 0; i < numsSize; i++)
    {
        if (maj == nums[i])
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                maj = nums[i];
                count++;
            }
        }
    }
    printf("%d ", maj);
}
