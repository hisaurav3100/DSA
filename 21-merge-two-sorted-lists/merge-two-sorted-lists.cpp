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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = nullptr;
        ListNode* tail = nullptr;


        ListNode *p=list1;
        ListNode *q=list2;
        while(p!= nullptr && q!=nullptr)
        {
            ListNode*newNode;
        if(p->val <= q->val)
        {
            newNode= new ListNode(p->val);
            p=p->next;
        }
        else{
            newNode= new ListNode(q->val);
            q=q->next;
        }

        if(result == nullptr)
        {
            result= newNode;
            tail= newNode;
        }
        else{
            tail->next = newNode;
            tail= tail->next;
        }
        }
    

        while(p!=nullptr)
        {
            ListNode *newNode= new ListNode(p->val);
            if(result == nullptr)
            {
                result=newNode;
                tail=newNode;
            }
            else{
            tail->next=newNode;
            tail=tail->next;
            }
            
            p= p->next;
        }
        while(q!=nullptr)
        {
            ListNode *newNode=new ListNode(q->val);
            if(result == nullptr)
            {
                result=newNode;
                tail=newNode;
            }
            else{
            tail->next = newNode;
            tail=tail->next;
                        }
            q= q->next;
        }
            
        
        return result;
    }
};