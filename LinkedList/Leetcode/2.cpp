/*
==========================================================
        LEETCODE 2 - ADD TWO NUMBERS
        Topic: Linked List
==========================================================

Problem:
Two numbers are represented by linked lists.
Each node contains one digit, and digits are stored
in reverse order.

Example:
l1 = 2 -> 4 -> 3
l2 = 5 -> 6 -> 4

342 + 465 = 807

Answer:
7 -> 0 -> 8

Key Idea:
1. Add corresponding digits.
2. Maintain a carry.
3. Create a new node for every resulting digit.
4. Continue until both lists are exhausted.
5. If carry remains, create one final node.

Time Complexity: O(max(n, m))
Space Complexity: O(max(n, m))
==========================================================
*/

class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // Dummy node makes linked-list construction easier
        ListNode* dummy = new ListNode(0);

        // 'current' is used to build the answer list
        ListNode* current = dummy;

        int carry = 0;

        /*
        Continue while at least one list still has a node
        or there is a carry remaining.
        */
        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            int sum = carry;

            // Add digit from l1 if available
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add digit from l2 if available
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            /*
            Example:
            sum = 17

            Digit to store = 17 % 10 = 7
            Carry           = 17 / 10 = 1
            */
            int digit = sum % 10;
            carry = sum / 10;

            // Create node containing the current digit
            current->next = new ListNode(digit);

            // Move current pointer forward
            current = current->next;
        }

        // First actual node is after dummy
        return dummy->next;
    }
};