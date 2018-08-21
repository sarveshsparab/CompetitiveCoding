package leetCode.questions;

import common.Question;

public class Q38 implements Question<String> {
    @Override
    public String solve(Object... args) {
        return countAndSay((int) args[0]);
    }

    public String countAndSay(int n) {
        if (n <= 0)
            return null;

        String p = "1";
        int i = 1;

        while (i < n) {
            StringBuilder sb = new StringBuilder();
            int occ = 1;
            int patternLen = p.length();
            for (int j = 1; j < patternLen; j++) {
                if (p.charAt(j) == p.charAt(j - 1)) {
                    occ++;
                } else {
                    sb.append(occ);
                    sb.append(p.charAt(j - 1));
                    occ = 1;
                }
            }

            sb.append(occ);
            sb.append(p.charAt(patternLen - 1));
            p = sb.toString();
            i++;
        }

        return p;
    }
}

