#include<iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
};
bool hasCycle(ListNode *head) {

        if(head==NULL){
            return false;
        }
        
        ListNode* slow =head;
        ListNode* fast =head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next; 
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
  int main() {
    ListNode* n1 = new ListNode{1, NULL};
    ListNode* n2 = new ListNode{2, NULL};
    ListNode* n3 = new ListNode{3, NULL};
    ListNode* n4 = new ListNode{4, NULL};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    n4->next = n2;

    if (hasCycle(n1))
        cout << "Cycle Found";
    else
        cout << "No Cycle";

    return 0;
}  
