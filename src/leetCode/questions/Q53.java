package leetCode.questions;

import common.Question;

public class Q53 implements Question<Integer> {
    @Override
    public Integer solve(Object... args) {
        return maxSubArray((int[]) args[0]);
    }

    public int maxSubArray(int[] nums) {
        int cMax = nums[0];
        int netMax = nums[0];

        for(int i=1;i<nums.length;i++){
            cMax = Math.max(nums[i], cMax+nums[i]);
            netMax = Math.max(cMax,netMax);
        }

        return netMax;
    }
}

