package leetCode.questions;

import common.Question;

import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class Q806 {
    public int[] solve(int[] w, String S) {
        return numberOfLines(w, S);
    }

    public int[] numberOfLines(int[] widths, String S) {
        List<Integer> mappedInts = S.chars().mapToObj(c -> (char) c).map(e -> ((int) e - 'a')).map(i -> widths[i]).collect(Collectors.toList());
        int lines = 1;
        int sum = 0;
        for (int i = 0; i < mappedInts.size(); i++) {
            if (sum + mappedInts.get(i) > 100) {
                lines++;
                sum = 0;
                i--;
            } else {
                sum = sum + mappedInts.get(i);
            }
        }
        return new int[]{lines, sum};
    }
}
