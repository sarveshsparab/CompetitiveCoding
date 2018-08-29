package leetCode.questions;

import java.util.LinkedList;
import java.util.Queue;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }

    @Override
    public String toString() {
        return "TreeNode{" +
                "val=" + val +
                '}';
    }
}

public class Q513 {

    private static TreeNode answer;

    public static void main(String args[]){

        TreeNode t1 = new TreeNode(1);
        TreeNode t2 = new TreeNode(2);
        TreeNode t3 = new TreeNode(3);
        TreeNode t4 = new TreeNode(4);
        TreeNode t5 = new TreeNode(5);
        TreeNode t6 = new TreeNode(6);
        TreeNode t7 = new TreeNode(7);

        t1.left = null;
        t1.right = t3;
        /*t2.left =  t4;
        t3.left = t5;
        t3.right = t6;
        t5.left = t7;*/

        System.out.println(findBottomLeftValue(t1));

        traverse(t1);

    }

    public static int findBottomLeftValue(TreeNode root) {
        if(root==null)
            return 0;

        TreeNode answer = null;

        Queue<TreeNode> treeQ = new LinkedList<>();
        ((LinkedList<TreeNode>) treeQ).push(root);
        while(!treeQ.isEmpty()){
            int qSize = treeQ.size();
            for(int i=0;i<qSize;i++){
                TreeNode current = treeQ.poll();
                if(i==0)
                    answer = current;
                if(current.left!=null)
                    treeQ.offer(current.left);
                if(current.right!=null)
                    treeQ.offer(current.right);
            }
        }

        return answer.val;
    }

    private static void traverse(TreeNode root){
        if(root==null)
            return;

        traverse(root.left);
        System.out.println("Node : "+root.val);
        traverse(root.right);
    }

}

