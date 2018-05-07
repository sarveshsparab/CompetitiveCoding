package leetCode.questions;

import common.Question;

import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class Q728 implements Question<List<Integer>> {
    @Override
    public List<Integer> solve(Object... args) {
        return selfDividingNumbers((int)args[0], (int)args[1]);
    }

    public List<Integer> selfDividingNumbers(int left, int right) {
        return IntStream.rangeClosed(left,right).boxed().filter(i->isSelfDividing(i)).collect(Collectors.toList());
    }

    private boolean isSelfDividing(Integer n){
        return n.toString().chars().mapToObj(c->Integer.valueOf(c-'0')).filter(i->i!=0 && Integer.valueOf(n)%i==0).count()==n.toString().length();
    }
}
