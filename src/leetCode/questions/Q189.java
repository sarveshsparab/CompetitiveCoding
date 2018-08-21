package leetCode.questions;

import common.Question;

import java.util.Arrays;

public class Q189 implements Question<Void> {
    @Override
    public Void solve(Object... args) {
        return rotate((int[]) args[0], (int) args[1]);
    }

    public Void rotate(int[] nums, int k) {
        int dummyArray[] = Arrays.copyOf(nums, nums.length);
        for (int i = 0; i < nums.length; i++) {
            nums[(i+k)%nums.length] = dummyArray[i];
        }
        return null;
    }
}

