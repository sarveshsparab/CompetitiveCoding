package leetCode.questions;

import common.Question;
import sun.reflect.generics.tree.Tree;

public class Q617 {

    public String solve() {
        TreeNode t1Root = new TreeNode(1);

        TreeNode t11 = new TreeNode(3);
        TreeNode t12 = new TreeNode(2);
        TreeNode t13 = new TreeNode(5);

        t1Root.left = t11;
        t1Root.right = t12;
        t11.left = t13;

        TreeNode t2Root = new TreeNode(2);

        TreeNode t21 = new TreeNode(1);
        TreeNode t22 = new TreeNode(3);
        TreeNode t23 = new TreeNode(4);
        TreeNode t24 = new TreeNode(7);

        t2Root.left = t21;
        t2Root.right = t22;
        t21.right = t23;
        t22.right = t24;

        return mergeTrees(t1Root, t2Root).toString();
    }

    public TreeNode mergeTrees(TreeNode t1, TreeNode t2) {
        if (t1 == null) {
            return t2;
        }
        if (t2 == null) {
            return t1;
        }

        t1.val = t1.val + t2.val;
        t1.left = mergeTrees(t1.left, t2.left);
        t1.right = mergeTrees(t1.right, t2.right);

        return t1;
    }

    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode(int x) {
            val = x;
        }
    }
}
