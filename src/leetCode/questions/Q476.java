package leetCode.questions;

import common.Question;

import java.util.stream.Collectors;

public class Q476 implements Question<Integer> {
    @Override
    public Integer solve(Object... args) {
        return findComplement((int)args[0]);
    }

    public int findComplement(int num) {
        return Integer.valueOf(Integer.toBinaryString(num).chars().mapToObj(e->(char)e).map(e->e=='1'?'0':'1').map(e->e.toString()).collect(Collectors.joining("")),2);
    }
}
