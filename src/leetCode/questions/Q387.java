package leetCode.questions;

public class Q387 {

    private char count[] = new char[26];

    public int firstUniqChar(String str) {
        for (int i = 0; i < str.length();  i++)
            count[str.charAt(i)-'a']++;

        for (int i = 0; i < str.length();  i++)
            if (count[str.charAt(i)] == 1)
                return i;

        return -1;
    }


}
