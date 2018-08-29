package leetCode.questions;

public class Q110 {

    public static void main(String [] args){

    }

    public static boolean isBalanced(TreeNode root) {
        if(root==null)
            return true;

        if(Math.abs(getHeight(root.left)-getHeight(root.right))<=1 && isBalanced(root.left) && isBalanced(root.right))
            return true;

        return false;
    }

    private static int getHeight(TreeNode node){
        if(node==null)
            return 0;
        return Math.max(getHeight(node.left),getHeight(node.right))+1;
    }
}
