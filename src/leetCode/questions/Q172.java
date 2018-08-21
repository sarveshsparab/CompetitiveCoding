package leetCode.questions;

import common.Question;

public class Q172 implements Question<Integer> {
    @Override
    public Integer solve(Object... args) {
        return trailingZeroes((Long) args[0]);
    }

    public int trailingZeroes(Long n) {
        int ans = 0;
        for (Long i = 5L; n / i >= 1; i = i * 5) {
            ans = ans + (int)(n / i);
        }
        return ans;
    }
}

