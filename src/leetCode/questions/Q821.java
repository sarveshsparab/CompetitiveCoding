package leetCode.questions;

import common.Question;

public class Q821 implements Question<int[]> {
    @Override
    public int[] solve(Object... args) {
        return shortestToChar((String) args[0], (char) args[0]);
    }

    public int[] shortestToChar(String S, char C) {
        int len = S.length();
        int answer[] = new int[len];
        char ch[] = S.toCharArray();
        int dist = 10000;
        for (int i = 0; i < len; i++) {
            if (ch[i] == C)
                dist = 0;
            else
                dist++;
            answer[i] = dist;
        }
        dist = 10000;
        for (int i = len - 1; i >= 0; i--) {
            if (ch[i] == C)
                dist = 0;
            else
                dist++;
            answer[i] = Math.min(answer[i], dist);
        }
        return answer;
    }
}
