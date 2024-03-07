#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next, *prev;
};

void pair_sum(struct Node *head, int X){
    struct Node *start = head;
    struct Node *end = head;
    while (end -> next != NULL)
        end = end -> next;

    bool found = false;

    while(start != end && end -> next != start){
        if((start -> data + end -> data) == X){
            found = true;
            cout<<"("<<start -> data<< ", "<<end -> data<<")"<<endl;
            start = start -> next;

            end = end -> prev;
        }
        else{
            if((start -> data + end -> data) < X)
                start = start -> next;
            else
                end = end -> prev;
        }
    }

    if(found == false)
        cout<<"No pair with given sum exists";
}

void insertAtHead(struct Node **head, int data){
    struct Node *temp = new Node;
    temp -> data = data;
    temp -> next = temp -> prev = NULL;
    if(!(*head))
        (*head) = temp;
    else{
        temp -> next = *head;
        (*head) -> prev = temp;
        (*head) = temp;
    }
}

int main(){
    struct Node *head = NULL;
    insertAtHead(&head, 12);
    insertAtHead(&head, 10);
    insertAtHead(&head, 9);
    insertAtHead(&head, 7);
    insertAtHead(&head, 8);
    insertAtHead(&head, 6);
    insertAtHead(&head, 5);
    int X = 19;
    cout<<"Pair sum is : ";
    pair_sum(head, X);
    return 0;
}