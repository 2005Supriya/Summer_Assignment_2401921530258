#include<iostream>
using namespace std;
struct ListNode {
    int data;
    ListNode* next;
};
ListNode* middleNode(ListNode* head) {
        ListNode*slow = head;
        ListNode*fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;

    }
   int main() {
    ListNode* n1 = new ListNode{1, NULL};
    ListNode* n2 = new ListNode{2, NULL};
    ListNode* n3 = new ListNode{3, NULL};
    ListNode* n4 = new ListNode{4, NULL};
    ListNode* n5 = new ListNode{5, NULL};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    ListNode* head = n1;

    ListNode* middle = middleNode(head);

    cout << "Middle Node = " << middle->data;

    return 0;
} 