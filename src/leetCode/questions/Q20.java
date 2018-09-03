package leetCode.questions;

import java.util.LinkedList;
import java.util.Stack;

public class Q20 {

    public static void main(String args[]){

    }

    public static boolean isValid(String s) {
        if (s == null || s.equals("()") || s.equals("{}") ||s.equals("[]")) {
            return true;
        }
        Stack<Character> stk = new Stack<Character>();
        stk.push(s.charAt(0));
        for(int i=1;i<s.length() ;i++){
            char c = s.charAt(i);
            if(c=='{' || c=='[' || c=='('){
                stk.push(c);
            }else{
                if(stk.isEmpty())
                    return false;
                if (s.charAt(i) == ')' && stk.peek() != '(') {
                    return false;
                }
                if (s.charAt(i) == '}' && stk.peek() != '{') {
                    return false;
                }
                if (s.charAt(i) == ']' && stk.peek() != '[') {
                    return false;
                }
                stk.pop();
            }
        }
        if (!stk.isEmpty()) {
            return false;
        }
        return true;
    }

}
