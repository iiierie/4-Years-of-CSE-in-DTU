#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
  int data;
  struct Node* next;
};
void insertAtBeginning(struct Node** head_ref, int new_data){
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node -> data = new_data;
  new_node -> next = (*head_ref);
  (*head_ref) = new_node;
}
void insertAfter(struct Node* prev_node, int new_data){
    if(prev_node == NULL){
        cout << "the given previous node cannot be NULL";
        return;
    }
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node -> data = new_data;
  new_node -> next = prev_node -> next;
  prev_node -> next = new_node;
}
void printList(struct Node* node){
    while(node != NULL){
        cout << node->data << " ";
        node = node->next;
    }
}
int main(){
    struct Node* head = NULL;
    insertAtBeginning(&head, 100);
    insertAtBeginning(&head, 200);
    insertAfter(head->next, 200);
    insertAtBeginning(&head, 13);
    insertAtBeginning(&head, 54);
    insertAfter(head->next, 37);
    insertAtBeginning(&head, 89);
    insertAtBeginning(&head, 78);
    insertAfter(head->next, 46);
    cout << "Linked list : ";
    printList(head);
    cout<<endl;
}