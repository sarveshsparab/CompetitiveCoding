package leetCode.questions;

import common.Question;

import java.util.stream.Collectors;

public class Q657 implements Question<Boolean> {
    @Override
    public Boolean solve(Object... args) {
        return judgeCircle((String) args[0]);
    }

    public boolean judgeCircle(String moves) {
        return moves.chars().parallel().map(c -> (char)c).filter(c->c=='U').count()==moves.chars().parallel().map(c -> (char)c).filter(c->c=='D').count()
                &&
                moves.chars().parallel().map(c -> (char)c).filter(c->c=='L').count()==moves.chars().parallel().map(c -> (char)c).filter(c->c=='R').count();
    }

}
