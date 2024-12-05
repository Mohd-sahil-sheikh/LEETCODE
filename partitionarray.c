/*Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.

 

Example 1:

Input: nums = [1,4,3,2]
Output: 4
Explanation: All possible pairings (ignoring the ordering of elements) are:
1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3
2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3
3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
So the maximum possible sum is 4.*/



#include <stdio.h>
int arrayPairSum(int *nums, int numsSize)
{

    int sum1, sum = 0;
    int temp;
    int i, j;
    // sorting the array
    for (i = 0; i < numsSize - 1; ++i)
    {
        for (j = 0; j < numsSize - 1 - i; ++j)
        {

            if (nums[j] > nums[j + 1])
                {
                    temp = nums[j];
            nums[j] = nums[j + 1];
            nums[j + 1] = temp;
        }
    }
}

// giving minimum sum
for (i = 0; i < numsSize; i = i + 2)
{
    if (nums[i] < nums[i + 1])
    {
        sum1 = nums[i];
    }
    else
    {
        sum1 = nums[i + 1];
    }
    sum = sum +sum1;
}
return sum;
}
int main()
{
    int numsSize;
    int i;
    int sum;
    printf("enter the size of array\n");
    scanf("%d", &numsSize);
    int nums[numsSize];
    printf("enter the array\n");
    for (i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }
    sum = arrayPairSum(nums, numsSize);
    printf("the minimum sum is :\n");
    printf("%d", sum);
    return 0;
}