package leetCode;

import common.Question;
import leetCode.questions.Q771;

public class PrimaryMain {

    private static Question quesToBeSolved = new Q771();

    public static void main(String args[]) {
        System.out.println("Solution : ");
        System.out.println(quesToBeSolved.solve("aA", "aAAbbbb"));
    }

}
