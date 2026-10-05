class Solution {
    public int countPairs(List<Integer> nums, int target) {
        Collections.sort(nums);

        int i=0;
        int j= nums.size() - 1;
        int c = 0;
        while(i<j)
        {
            int sum = nums.get(i) + nums.get(j);
            if(sum < target)
            {
                 c=c+(j-i);
                i = i + 1;
            }
            else
            {
                j = j - 1;
            }
        }
        return c;
    }
}