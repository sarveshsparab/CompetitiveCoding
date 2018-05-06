package leetCode.questions;

import common.Question;

public class Q461 implements Question<Integer> {
    @Override
    public Integer solve(Object... args) {
        return hammingDistance((int)args[0], (int)args[1]);
    }

    public int hammingDistance(int x, int y) {
        return (int)Integer.toBinaryString(x^y).chars().mapToObj(e->(char)e).filter(e->e=='1').count();
    }
}
