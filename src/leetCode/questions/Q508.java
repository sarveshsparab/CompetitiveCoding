package leetCode.questions;

import java.util.*;
import java.util.stream.Collectors;

public class Q508 {

    public static void main(String [] args){
        TreeNode t1 = new TreeNode(5);
        TreeNode t2 = new TreeNode(2);
        TreeNode t3 = new TreeNode(-5);
        TreeNode t4 = new TreeNode(4);
        TreeNode t5 = new TreeNode(5);
        TreeNode t6 = new TreeNode(6);
        TreeNode t7 = new TreeNode(7);

        t1.left = t2;
        t1.right = t3;
        /*t2.left =  t4;
        t3.left = t5;
        t3.right = t6;
        t5.left = t7;*/

        System.out.println(findFrequentTreeSum(t1).toString());
    }

    public static int[] findFrequentTreeSum(TreeNode root) {
        Map<Integer,Integer> sumList = new HashMap<>();
        if(root==null)
            return new int[0];
        findFrequentTreeHelper(root,sumList);

        Comparator<? super Map.Entry<Integer, Integer>> maxValueComparator = (
                entry1, entry2) -> entry1.getValue().compareTo(
                entry2.getValue());

        Optional<Map.Entry<Integer, Integer>> maxValue = sumList.entrySet()
                .stream().max(maxValueComparator);

        List<Integer> answer =  sumList.entrySet().stream()
                .filter(x -> maxValue.get().getValue().equals(x.getValue()))
                .map(Map.Entry::getKey)
                .collect(Collectors.toList());

        int[] answerArray = new int[answer.size()];
        for(int i=0;i<answer.size();i++){
            answerArray[i] = Integer.valueOf(answer.get(i));
        }

        return answerArray;
    }

    public static void findFrequentTreeHelper(TreeNode root, Map<Integer,Integer> sumList) {
        if (root == null)
            return;

        findFrequentTreeHelper(root.left, sumList);
        findFrequentTreeHelper(root.right, sumList);
        int sumVal = getSum(root);
        sumList.put(sumVal,sumList.getOrDefault(sumVal,0)+1);

        return;
    }

    public static int getSum(TreeNode root) {
        if(root==null)
            return 0;
        if(root.left==null && root.right==null)
            return root.val;
        return getSum(root.left)+getSum(root.right)+root.val;
    }

}
