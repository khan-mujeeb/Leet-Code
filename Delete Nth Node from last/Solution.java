/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
public class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode pointer = head;
        for (int i = 0; i < n; i++) {
            pointer = pointer.next;
        }
        if (pointer == null) {
            return head.next;
        }
        ListNode pointer2 = head;
        while (pointer.next != null) {
            pointer = pointer.next;
            pointer2 = pointer2.next;
        }
        pointer2.next = pointer2.next.next;
        return head;
    
    }
}