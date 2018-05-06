package leetCode.questions;

import common.Question;

public class Q190 implements Question<Integer> {
    @Override
    public Integer solve(Object... args) {
        return reverseBits((int)args[0]);
    }

    public int reverseBits(int n) {
        String revString = String.format("%32s", Integer.toBinaryString(n)).replace(' ', '0');
        return Integer.parseUnsignedInt(new StringBuilder(revString).reverse().toString(),2);
    }
}
