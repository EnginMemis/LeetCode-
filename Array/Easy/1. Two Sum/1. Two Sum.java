class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        for(int i = 0; i < nums.length; ++i){
            Integer index = map.get(nums[i]);
            if(index != null)
                return new int[]{i, index};
            else
                map.put(target - nums[i], i);
        }
        return nums;
    }
}
