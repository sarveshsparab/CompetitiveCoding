package leetCode.questions;

import common.Question;

import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;

public class Q561 implements Question<Integer> {
    @Override
    public Integer solve(Object... args) {
        Integer[] a = (Integer[])args;
        int num[] = new int[a.length];
        for (int i = 0; i < a.length; i++) {
            num[i] = a[i].intValue();
        }
        return arrayPairSum((int[]) num);
    }

    public int arrayPairSum(int[] nums) {
        Arrays.sort(nums);
        int sum = 0;
        for(int i=0;i<nums.length;i++){
            sum=sum+nums[i];
            i++;
        }
        return sum;
    }
}
