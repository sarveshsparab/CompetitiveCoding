package leetCode.questions;

import javax.xml.soap.Node;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}
enum NodeType {
    LEFTCHILD, RIGHTCHILD, ROOTNODE
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
        findBottomLeftValueRecursive(root,  NodeType.ROOTNODE, 0, 0);
        return answer==null?root.val:answer.val;
    }

    public static void findBottomLeftValueRecursive(TreeNode node, NodeType type, int level, int maxLevel){
        if(node==null){
            return;
        }

        if(type==NodeType.LEFTCHILD && node.left==null && node.right==null && level>maxLevel){
            maxLevel = level;
            answer = node;
            return;
        }

        findBottomLeftValueRecursive(node.left, NodeType.LEFTCHILD, level+1, maxLevel);
        findBottomLeftValueRecursive(node.right, NodeType.RIGHTCHILD, level+1, maxLevel);
    }

    private static void traverse(TreeNode root){
        if(root==null)
            return;

        traverse(root.left);
        System.out.println("Node : "+root.val);
        traverse(root.right);
    }

}

