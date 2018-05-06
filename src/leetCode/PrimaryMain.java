package leetCode;

import common.Question;
import leetCode.questions.*;

public class PrimaryMain {

    private static Question quesToBeSolved = new Q804();

    public static void main(String args[]) {
        System.out.println("Solution : ");
        String[] words = {"gin", "zen", "gig", "msg"};
        System.out.println(quesToBeSolved.solve(words));
    }

}
