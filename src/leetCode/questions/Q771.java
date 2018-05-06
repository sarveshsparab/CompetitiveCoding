package leetCode.questions;

import common.Question;

import java.util.HashSet;
import java.util.Set;
import java.util.stream.Collectors;

public class Q771 implements Question<Integer> {

    @Override
    public Integer solve(Object ... args) {
        return numJewelsInStones((String)args[0],(String)args[1]);
    }

    private int numJewelsInStones(String J, String S) {
        Set<Character> jewels = J.chars().mapToObj(e->(char)e).collect(Collectors.toSet());
        return (int)S.chars().mapToObj(e->(char)e).filter(e->jewels.contains(e)).count();
    }
}
