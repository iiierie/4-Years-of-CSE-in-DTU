//information: p is the pointer variable which traverses and points each node, ptr is the new node that i create ,head is the first node of the linkedlist

/*diff between loop (p->next != NULL) ra (p!=NULL)
(p!=NULL) runs until the linkedlist ends ani no node remaining even after the last node
(p->next != NULL) runs until the last node*/

#include<stdio.h>
#include<stdlib.h>
//defining a structure and typedef it as node so that i dont have to use struct keyword again and again
typedef struct node{
    int data;
    struct node* next;
    }node;

//function to display the linkedlist //loop until the pointer isnt = to NULL
void display(node* head){
    if(head == NULL){
        printf("EMPTY LIST");
    }
    else {
    node* p = head;
    while(p != NULL){
        printf("%d ",p->data);
        p = p -> next;
    }
    }
}



//remember ki malloc use garesi sabai memory heap ma banxa

// ani we cant access heap ma baneko memory etikai..so we need to create a pointer in stack first ani balla malloc le return gareko void pointer lai typecast grne as required 
//aba insert grne bela chai naya node insert garne ho ni ta so tesaile return type ma struct node lagaideko 

node* insert_at_beginning(node* head, int value_to_insert){
    else {
    //naya node banaune aba  junchai insert grnu xa beginning ma
    node* ptr = (node*)malloc(sizeof(node));
    ptr -> data = value_to_insert; //naya node ko data ma insert grna khojeko value haldine
    ptr -> next = head; //ani yo node le chai head lai point grxa kinaki yo beginning ma insert vayesi head yo paxiauxa
    return ptr; //returns this new formed node
    }
}


struct node* insert_at_index(struct node* head , int value_to_insert, int index){
    
    struct node* ptr = (node*)malloc(sizeof(node));
    struct node* p = head; //create pointing variable that traverses
    int i = 0; //counter
    //loop until it reaches index vanda ek node agadi so (index - 1) gareko 
    while(i != index - 1 ){
        p = p -> next;
        i++;
    }

    ptr -> next = p -> next;
    p -> next= ptr;
    ptr -> data = value_to_insert;
    return head;
}

//insert at end of linkedlist 
//since we are making changes to the head so head lai arko p ma rakhne so tha when we change the p pointer during traverse and all head doesnt change // display bela ma chai it doesnt matter cause display matra vairxa nothing return
struct node* insert_at_end(struct node* head, int value_to_insert){

    struct node* p = head; //store head in pointer p
    struct node* ptr = (node*)malloc(sizeof(node)); //make new node
    
    while(p->next !=NULL){
        p = p -> next; //traverse
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = value_to_insert;
    return head;

}

//insertion after node if pointer to node is given
struct node* insert_after_node(node* head, node* nodename , int value_to_insert){
    node* ptr = (node*)malloc(sizeof(node));
    ptr-> data = value_to_insert;
     ptr->next = nodename->next;
     nodename->next = ptr;
     return head;
}

struct node* insert_after_value(struct node* head,int value_to_insertafter, int value_to_insert){
    struct node* p = head;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    while(p->data != value_to_insertafter){
        p = p->next;
    }
    ptr->next = p -> next;
    p->next = ptr;
    ptr->data = value_to_insert;
    return head;
}

struct node * reverse(node* head){
    node* previous = NULL;
    node* current = head;
    node* nextnode;
    while(current != NULL){
        nextnode= current->next;
        current->next = previous;
        previous = current;
        current = nextnode;
    }
        
    return previous;
}
//main function
int main(){
    //creating memory in heap using malloc 
    node* head = NULL;
    node* temp = (node*)malloc(sizeof(node)); //malloc le void pointer return grxa after creating memory in heap so typecast gareko in head pointer jun chai stack ma xa 
    head = temp;
    node* second = (node*)malloc(sizeof(node));
    node* third = (node*)malloc(sizeof(node));
    node* fourth = (node*)malloc(sizeof(node));

    // head node
    head->data = 1;
    head->next = second;
    // second node
    second->data = 2;
    second->next = third;
    // third node
    third->data = 3;
    third->next = fourth;
    // fourth node
    fourth->data = 4;
    fourth->next = NULL;

    display(head); // before insertion display
    printf("after insertion \n");
    head = insert_at_beginning(head,1); //euta naya node return vako xa ...aba new head vaneko chai yo naya node ho kinaki insert vaiskyo beginning ma


    //inserts at certain index doesnt work for 0 kinaki 0 index vaneko beginning ani beginning ko procedure mathi xa
    head = insert_at_index(head,8,2);


    //insert at end
    head = insert_at_end(head,99);

    //insert after node 
    head = insert_after_node(head,third,89);

    display(head); // after insertion display


    return 0;
}