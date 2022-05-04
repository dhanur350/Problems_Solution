// Add two numbers leetcode
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int sum = 0;
        int fwd = 0;
        int rem = 0;
        ListNode *headNode = new ListNode();
        ListNode *tailNode = headNode;

        do
        {
            int l1_val = 0;
            int l2_val = 0;

            if (l1 != nullptr)
            {
                l1_val = l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr)
            {
                l2_val = l2->val;
                l2 = l2->next;
            }

            sum = l1_val + l2_val + fwd;
            fwd = sum / 10;
            rem = sum % 10;

            tailNode->val = rem;
            if ((l1 != nullptr) || (l2 != nullptr) || (fwd != 0))
                tailNode->next = new ListNode();
            tailNode = tailNode->next;

            if (l1 == nullptr && l2 == nullptr && fwd != 0)
                tailNode->val = fwd;

        } while ((l1 != nullptr) || (l2 != nullptr));

        return headNode;
    }
};