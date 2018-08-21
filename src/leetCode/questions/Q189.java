package leetCode.questions;

import common.Question;

public class Q189 implements Question<Void> {
    @Override
    public Void solve(Object... args) {
        return rotate((int[]) args[0], (int) args[1]);
    }

    public Void rotate(int[] nums, int k) {
        int temp;
        int size = nums.length;
        k = k%size;
        for (int i = 0; i < k; i++) {
            temp=nums[size-1];

            for(int j=size-1;j>0;j--){
                nums[j]=nums[j-1];
            }

            nums[0] = temp;
        }
        return null;
    }
}

