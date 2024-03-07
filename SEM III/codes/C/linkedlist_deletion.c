#include<stdio.h>
#include<stdlib.h>
typedef struct node {
 int data;
 struct node* next;
} node;


void display(node* head){
    node* p = head;
    while(p != NULL){
        printf("%d ", p->data);
        p = p-> next;
    }
}
//deletion from beginning 
// just simply head lai arko pointer dine ani substitute next node as head ani delete the first node with help of pointer that we created 
struct node* delete_from_beginning(struct node* head){
    node* p =  head;
    head = head ->next;
    free(p);
    return head;
}
//deletion from index 
//p ra q pointer ,p vaneko head ani q vaneko p ko successive node point garxa
node* delete_from_index( node* head,int index){
    struct node* p = head;
    struct node* q = p->next;
    for( int i= 0; i < index-1;i++){
        p = p->next;
        q = q->next; //duitai lai traverse so that q points to node which comes after p
    }
    p->next = q->next;
    free(q); //q lai free grdine 
    return head;
}

//delete from end
//p and q pointing at successive nodes ani do as before
node* delete_from_end(struct node* head){
   if (head==null){
    printf("empty list");
   }
   else{
    struct node* p= head;
    struct node* q= p->next;
    while( q->next != NULL){
        p= p->next;
        q= q->next;
    }
    p->next = NULL;
    free(q);
   }
    return head;
}

//delete node with certain value
node* delete_value(node* head,int value_to_delete){
    node* p= head;
    node* q= p->next;
    while(q->data != value_to_delete){
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
    free(q);
return head;
}

int main(){
    node* head = (node*)malloc(sizeof(node));
    node* second = (node*)malloc(sizeof(node));
    node* third = (node*)malloc(sizeof(node));
    node* fourth = (node*)malloc(sizeof(node));
    node* fifth = (node*)malloc(sizeof(node));
    node* sixth = (node*)malloc(sizeof(node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;  
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = sixth;
    sixth->data = 6;
    sixth->next = NULL;
    
    //display data
    display(head);
    printf("\nafter deletion frombeginning\n");
    head = delete_from_beginning(head);
    display(head);

    printf("\nafter deletion from index\n");
    head = delete_from_index(head, 2);
    display(head);

    printf("\nafter deletion from end\n");
    head = delete_from_end(head);
    display(head);

    printf("\nafter deletion certain value\n");
    head = delete_value(head,3);
    display(head);
    return 0;
}