#include<iostream>
#include<stack>
using namespace std;
struct ListNode {
    int data;
    ListNode* next;
};
ListNode* reverseList(ListNode* head) {
       
        stack<int> st;
         ListNode* temp = head;
        while(temp!= NULL){
            st.push(temp->data);
            temp = temp->next;
        }
        temp = head;
        while(temp!= NULL){
            temp->data = st.top();
            st.pop();
            temp= temp->next;
        }
        return head;
    }
    void printList(ListNode* head) {
    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}
  int main(){
    ListNode* n1 = new ListNode{1, NULL};
    ListNode* n2 = new ListNode{2, NULL};
    ListNode* n3 = new ListNode{3, NULL};
    ListNode* n4 = new ListNode{4, NULL};

     n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    n4->next = NULL;
    ListNode* head = n1;

    cout << "Original List: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
  }  