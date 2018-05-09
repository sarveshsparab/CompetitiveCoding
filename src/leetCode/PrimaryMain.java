package leetCode;

import common.Question;
import leetCode.questions.*;

public class PrimaryMain {

    private static Question quesToBeSolved = new Q561();

    public static void main(String args[]) {
        System.out.println("Solution : ");
        Integer[] nums = {1,4,3,2};
        System.out.println(quesToBeSolved.solve(nums));
    }

}
