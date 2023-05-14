/*You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.*/

#include <stdio.h>

int main()
{
    int nums[4] = {1, 2, 3, 2}, numsSize = 4;
    int count = 0, sum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        for (int k = i + 1; k < numsSize; k++)
        {
            if (nums[i] - nums[k] == 0)
            {
                nums[k] = 0;
                count++;
            }
        }
        if (count > 0)
        {
            nums[i] = 0;
        }
        sum = sum + nums[i];
        count = 0;
    }
    printf("%d", sum);
}