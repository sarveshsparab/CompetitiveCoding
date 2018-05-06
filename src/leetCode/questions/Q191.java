package leetCode.questions;

import common.Question;

public class Q191 implements Question<Integer> {
    @Override
    public Integer solve(Object... args) {
        return hammingWeight((int)args[0]);
    }

    public int hammingWeight(int n) {
        return (int)Integer.toBinaryString(n).chars().mapToObj(e->(char)e).filter(e->e=='1').count();
    }
}
