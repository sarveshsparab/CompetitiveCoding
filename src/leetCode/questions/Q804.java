package leetCode.questions;

import common.Question;

import java.util.Arrays;
import java.util.stream.Collectors;

public class Q804  implements Question<Integer>  {
    private String[] morseMapping = {".-","-...","-.-.","-..",".","..-.",
            "--.","....","..",".---","-.-",".-..","--","-.","---",".--.",
            "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    @Override
    public Integer solve(Object ... arg) {
        return uniqueMorseRepresentations((String[])arg);
    }

    public int uniqueMorseRepresentations(String[] words) {
        return Arrays.stream(words).map(w->convertToMorse(w)).collect(Collectors.toSet()).size();
    }

    private String convertToMorse(String word){
        return word.chars().mapToObj(e->(char)e).map(e->((int)e-'a')).map(e->morseMapping[e]).collect(Collectors.joining(""));
    }
}
