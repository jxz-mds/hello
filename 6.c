int moreThanHalfNum_Solution(int *nums, int numsSize)
{
    int book[10000] = {0}, i;
    for (i = 0; i < numsSize; i++)
    {
        book[nums[i]]++;
        if (book[nums[i]] > (numsSize / 2.0))
            return nums[i];
    }
}
