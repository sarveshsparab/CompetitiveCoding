package leetCode;

import common.Question;
import leetCode.questions.*;

public class PrimaryMain {

    private static Question quesToBeSolved = new Q728();

    public static void main(String args[]) {
        System.out.println("Solution : ");
        System.out.println(quesToBeSolved.solve(1,22));
    }

}
