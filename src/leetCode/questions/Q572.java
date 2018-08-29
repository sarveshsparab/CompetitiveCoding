package leetCode.questions;

public class Q572 {

    public static void main(String [] args){
        TreeNode ta1 = new TreeNode(1);
        TreeNode ta2 = new TreeNode(2);
        TreeNode ta3 = new TreeNode(3);
        TreeNode ta4 = new TreeNode(4);
        TreeNode ta5 = new TreeNode(5);

        TreeNode tb1 = new TreeNode(1);
        TreeNode tb2 = new TreeNode(2);
        TreeNode tb4 = new TreeNode(4);

        ta3.left = ta4;
        ta3.right = ta5;
        ta4.left = ta1;
        ta4.right = ta2;

        tb4.left = tb1;
        tb4.right = tb2;



        TreeNode ta_1 = new TreeNode(1);
        TreeNode ta_2 = new TreeNode(1);
        TreeNode tb_1 = new TreeNode(1);

        ta_1.left = ta_2;


        System.out.println(isSubtree(ta_1, tb_1));
    }

    public static boolean isSubtree(TreeNode s, TreeNode t) {
        if(s==null)
            return false;
        if(t==null)
            return true;
        if(compareTrees(s,t))
            return true;
        return isSubtree(s.left,t) || isSubtree(s.right,t);
    }

    private static boolean compareTrees(TreeNode a, TreeNode b){
        if(a==null && b==null)
            return true;
        if (a != null && b != null)
            return (a.val==b.val && compareTrees(a.left,b.left) && compareTrees(a.right,b.right));
        else
            return false;
    }

    private static TreeNode findNode(TreeNode t, int val){
        if(t!=null) {
            if (t.val == val)
                return t;
            else{
                TreeNode foundNode = findNode(t.left, val);
                if(foundNode==null)
                    foundNode = findNode(t.right, val);
                return foundNode;
            }
        }else
            return null;
    }

}
