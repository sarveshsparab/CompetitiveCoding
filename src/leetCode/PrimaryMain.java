package leetCode;

import common.Question;
import leetCode.questions.*;

public class PrimaryMain {

    private static Question quesToBeSolved = new Q811();

    public static void main(String args[]) {
        System.out.println("Solution : ");
        String[] cpdomains = {"900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"};
        System.out.println(quesToBeSolved.solve(cpdomains));
    }

}
