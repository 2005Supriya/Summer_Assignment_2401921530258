#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};


ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* delNode;
      
        if(head->next==NULL){
            delete head;
            return NULL;
        }
       ListNode*fast = head;
        for(int i=0; i<n; i++){
            fast = fast->next;
        }
       
         if(fast==NULL){
            return head->next;
        }
         ListNode*slow = head;
        while(fast->next!=NULL){
            slow = slow ->next;
            fast = fast->next;
        }
       
        delNode = slow->next;
        slow ->next = slow->next->next;
        delete delNode;
        
        return head;
    }
    void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

  int main() {
    
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 2;

    head = removeNthFromEnd(head, n);

    cout << "Updated List: ";
    printList(head);

    return 0;
}  