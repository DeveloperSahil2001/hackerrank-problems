class Solution {
    public int[] twoSum(int[] nums, int target) {
     int i,j;
     int ar[]=new int[2];
     for(i=0;i<nums.length;i++)
     {
      for(j=0;j<nums.length&&i!=j;j++)
      {
        if(nums[i]+nums[j]==target)
        {
         ar[0]=i;
            ar[1]=j;
            break;
        }
      }
     }
     Arrays.sort(ar);
        return ar;
    }
}