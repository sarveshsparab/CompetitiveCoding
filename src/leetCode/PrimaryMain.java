package leetCode;

import common.Question;
import leetCode.questions.*;

public class PrimaryMain {

    private static Q806 quesToBeSolved = new Q806();

    public static void main(String args[]) {
        System.out.println("Solution : ");
        int[] widths = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
        System.out.println(quesToBeSolved.solve(widths, "abcdefghijklmnopqrstuvwxyz"));
    }

}
