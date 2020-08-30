int findMin(int* nums, int numsSize)
{
    if(numsSize==0)
    return -1;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]>nums[i+1])
        return nums[i+1];
    }
    return nums[0];
}
