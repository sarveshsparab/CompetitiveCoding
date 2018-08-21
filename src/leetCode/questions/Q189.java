package leetCode.questions;

import common.Question;

import java.util.Arrays;
import java.util.stream.IntStream;

public class Q189 implements Question<Void> {
    @Override
    public Void solve(Object... args) {
        return rotate((int[]) args[0], (int) args[1]);
    }

    public Void rotate(int[] nums, int k) {
        int dummyArray[] = Arrays.copyOf(nums, nums.length);
        IntStream.range(0,nums.length).parallel().forEach(x->nums[(x+k)%nums.length]=dummyArray[x]);
        return null;
    }
}

