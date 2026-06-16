#include <iostream>
#include <stack>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* reverse(ListNode*head){
     stack<int> st;
     ListNode*temp = head;
    while(temp!=NULL){
        st.push(temp->val);
        temp= temp->next;
    }
    temp = head;
    while(temp!=NULL){
        temp->val=st.top();
        st.pop();
        temp= temp->next;
    }
    return head;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
       ListNode*slow = head;
       ListNode*fast = head;
       while(fast->next!=NULL && fast->next->next!=NULL){
        slow= slow->next;
        fast = fast->next->next;
       }
       ListNode*newHead = reverse(slow->next);
       ListNode*first = head;
       ListNode*second = newHead;
       while(second!= NULL){
        if(first->val != second->val){
            reverse(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
       
       }
       reverse(newHead);
       return true;
    }
  int main() {
    
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    if (isPalindrome(head))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}  