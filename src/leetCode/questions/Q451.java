package leetCode.questions;

import java.util.Arrays;
import java.util.Map;
import java.util.stream.Collectors;

public class Q451 {


    public static void main(String args[]){
        frequencySort("tree");
    }

    public static String frequencySort(String s) {
        Map<String, Long> frequentChars = Arrays.stream(s.split("")).collect(Collectors.groupingBy(c -> c, Collectors.counting()));

        StringBuilder b = new StringBuilder();

        frequentChars.forEach((k, v) -> System.out.println(k + ":" + v));

        frequentChars.forEach((k, v) -> b.append(k));

        return b.toString();
    }


}
