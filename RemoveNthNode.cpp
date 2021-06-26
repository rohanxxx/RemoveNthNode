/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int length = 0;
        
        ListNode *dummy = new ListNode();
        ListNode *location;
        location = NULL;
        //cout << "location->val: " << location->val << endl; //RunTime Error
        //cout << "dummy->val: " << dummy->val << endl; //No RunTime Error
        //cout << "dummy->next->val: " << dummy->next->val << endl; //it will give you runTime error
        location = head;
        dummy->next = head;
        
        while(location != NULL)
        {
            length++;
            location = location->next;
        }
        
        if(length > 1)
        {
            length -= n;
            if(length != 0)
            {
                //location = head;
                location = dummy;
        
                while(length > 0)
                {
                    length--;
                    location = location->next;
                }
    
                location->next = location->next->next;

            return head;
            }
            else
            {
                return head->next;
            }
        }
        else if(length == 1)
        {
            return head->next;
        }
        else
        {
            return head;
        }
    }
};
