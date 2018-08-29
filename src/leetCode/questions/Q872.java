package leetCode.questions;

import java.util.LinkedList;
import java.util.List;

public class Q872 {

    public static void main(String[] args){
        TreeNode t1 = new TreeNode(3);
        TreeNode t2 = new TreeNode(5);
        TreeNode t3 = new TreeNode(1);
        TreeNode t4 = new TreeNode(6);
        TreeNode t5 = new TreeNode(2);
        TreeNode t6 = new TreeNode(9);
        TreeNode t7 = new TreeNode(8);
        TreeNode t8 = new TreeNode(7);
        TreeNode t9 = new TreeNode(4);

        t1.left = t2;
        t1.right = t3;
        t2.left =  t4;
        t2.right = t5;
        t3.left = t6;
        t3.right = t7;
        t5.left = t8;
        t5.right = t9;

        List<Integer> list1 = new LinkedList<>();
        getLeafValueSeq(t9, list1);

        System.out.println(list1);

        System.out.println(leafSimilar(new TreeNode(1), new TreeNode(2)));

    }

    public static boolean leafSimilar(TreeNode root1, TreeNode root2) {

        List<Integer> tree1list = new LinkedList<>();
        getLeafValueSeq(root1, tree1list);

        List<Integer> tree2list = new LinkedList<>();
        getLeafValueSeq(root2, tree2list);

        if(tree1list.size()==tree2list.size()){
            for(int i=0;i<tree1list.size();i++){
                if(tree1list.get(i)!=tree2list.get(i))
                    return false;
            }
        }else
            return false;
        return true;
    }

    private static void getLeafValueSeq(TreeNode node, List<Integer> leafValues){
        if(node==null)
            return;
        if(node.left==null && node.right==null){
            leafValues.add(node.val);
        }else{
            getLeafValueSeq(node.left, leafValues);
            getLeafValueSeq(node.right, leafValues);
        }
    }
}
