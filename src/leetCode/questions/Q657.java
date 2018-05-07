package leetCode.questions;

import common.Question;

import java.util.stream.Collectors;

public class Q657 implements Question<Boolean> {
    @Override
    public Boolean solve(Object... args) {
        return judgeCircle((String) args[0]);
    }

    public boolean judgeCircle(String moves) {
        return moves.chars().map(c -> conv((char)c)).boxed().collect(Collectors.summingInt(Integer::intValue))==0;
    }

    private int conv(char c) {
        switch (c) {
            case 'U':
                return 1;
            case 'D':
                return -1;
            case 'L':
                return 1;
            case 'R':
                return -1;
            default:
                return 0;
        }
    }
}
