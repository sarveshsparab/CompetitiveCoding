package leetCode.questions;

import common.Question;

public class Q231 implements Question<Boolean> {
    @Override
    public Boolean solve(Object... args) {
        return isPowerOfTwo((int)args[0]);
    }

    public boolean isPowerOfTwo(int n) {
        return n!=0 && ((n&(n-1)) == 0);
    }
}
