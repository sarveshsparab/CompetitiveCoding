package leetCode.questions;

public class Q104 {

    public static void main(String [] args){

    }

    public static int maxDepth(TreeNode root) {
        if(root==null)
            return 0;

        return Math.max(maxDepth(root.right),maxDepth(root.left))+1;
    }

}
