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
    pair<int,int> mix(int val1,int val2,int car){
        int sm,cry=0;
        sm = val1+val2+car;
        if(sm>=10){
            cry = 1;
            sm = sm-10;
        }
        return std::make_pair(sm, cry);
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //I should stop when both pointers at null
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        int carry = 0;
        int sum = 0;
        ListNode* ans = new ListNode();
        ListNode* t3 = ans;
        while(t1!=nullptr || t2!=nullptr){
            if(t1==nullptr && t2!=nullptr){
                pair<int,int> p = mix(0,t2->val,carry);
                sum = p.first;
                carry = p.second;
                ListNode* newNode = new ListNode(sum);
                t3->next = newNode;
                t3 = t3->next;
                t2 = t2->next;
            }
            else if(t1!=nullptr && t2==nullptr){
                pair<int,int> p = mix(t1->val,0,carry);
                sum = p.first;
                carry = p.second;
                ListNode* newNode = new ListNode(sum);
                t3->next = newNode;
                t3 = t3->next;
                t1 = t1->next;
            }
            else{
                pair<int,int> p = mix(t1->val,t2->val,carry);
                sum = p.first;
                carry = p.second;
                ListNode* newNode = new ListNode(sum);
                t3->next = newNode;
                t3 = t3->next;
                t1 = t1->next;
                t2 = t2->next;
            }
        }
        if(carry ==1){
            ListNode* newNode = new ListNode(1);
            t3->next = newNode;
        }
        return ans->next;
    }
};
