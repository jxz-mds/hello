int MaxSubseqSum(int *nums, int numsSize)
{
        int ThisSum, MaxSum, i;

        ThisSum = MaxSum = 0;
        for (i = 0; i < numsSize; i++)
        {
                ThisSum += nums[i]; /* 鍚戝彸绱姞 */
                if (ThisSum > MaxSum)
                        MaxSum = ThisSum; /* 路鍙戠幇鏇村ぇ鍜屽垯鏇存柊褰撳墠缁撴灉 */
                else if (ThisSum < 0)     /* 濡傛灉褰撳墠瀛愬垪鍜屼负璐熸暟 */
                        ThisSum = 0;      /* 鍒欎笉鍙兘浣垮悗闈㈢殑閮ㄥ垎鍜屽澶э紝鎶涘純涔?*/
        }
        return Maxsum;
}
//鎬濊矾2:绌蜂妇锛岀畻娉曞鏉傚害涓篛(n^2)
int maxSubArray(int *nums, int numsSize)
{
        int Thissum = nums[0], sum, i, j;

        for (i = 0; i < numsSize; i++)
        {
                sum = 0;
                for (j = i; j < numsSize; j++)
                {
                        sum += nums[j];
                        if (sum > Thissum)
                        {
                                Thissum = sum;
                                ;
                        }
                }
        }
        return Thissum;
}
