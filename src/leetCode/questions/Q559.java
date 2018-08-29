package leetCode.questions;

import java.util.*;

class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val,List<Node> _children) {
        val = _val;
        children = _children;
    }

    @Override
    public String toString() {
        return "Node{" +
                "val=" + val +
                '}';
    }
};

public class Q559 {

    public static void main(String[] args){

        Node n5 = new Node(5, new LinkedList<Node>(Arrays.asList()));
        Node n6 = new Node(6, new LinkedList<Node>(Arrays.asList()));

        Node n2 = new Node(2, new LinkedList<Node>(Arrays.asList()));
        Node n3 = new Node(3, new LinkedList<Node>(Arrays.asList(n5,n6)));
        Node n4 = new Node(4, new LinkedList<Node>(Arrays.asList()));

        Node n1 = new Node(1, new LinkedList<Node>(Arrays.asList(n2,n3,n4)));

        System.out.println(maxDepth(n1));
    }

    public static int maxDepth(Node root) {
        if(root==null)
            return 0;

        int max=0;
        for(int i=0;i<root.children.size();i++){
            int d = maxDepth(root.children.get(i));
            max = max>d?max:d;
        }

        return max+1;
    }

}
