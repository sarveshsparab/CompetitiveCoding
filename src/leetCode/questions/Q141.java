package leetCode.questions;

import java.util.Arrays;
import java.util.stream.IntStream;

class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
        next = null;
    }
}

public class Q141 {

    public static void main(String args[]){

        ListNode n1 = new ListNode(1);
        ListNode n2 = new ListNode(2);
        ListNode n3 = new ListNode(3);
        ListNode n4 = new ListNode(4);
        ListNode n5 = new ListNode(5);
        ListNode n6 = new ListNode(6);
        ListNode n7 = new ListNode(7);

        n1.next=n2;
        n2.next=n3;
        n3.next=n4;
        n4.next=n5;
        n5.next=n6;
        n6.next=n7;
        n7.next=n4;

        //n1.next=null;

        //traverse(n1);

        System.out.println(hasCycle(n1));

    }

    public static boolean hasCycle(ListNode head) {
        if(head==null)
            return false;
        ListNode fast = head.next;
        ListNode slow = head;

        while(fast!=null && slow!=null){
            if(fast==slow){
                return true;
            }
            fast = fast.next==null?null:fast.next.next;
            slow = slow.next;
        }

        return false;
    }

    private static void traverse(ListNode head){
        while(head.next!=null){
            System.out.println("In Node : "+head.val);
            head=head.next;
        }
    }

}

