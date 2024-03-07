#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void display(struct node* head){
    if(head == NULL){
        printf("EMPTY LIST");
    }
    else {
        struct node* ptr = head;
    //whole pointer  null nahuda samma loop run grne
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next; 
    }
    }
}

void search(struct node* head,int value_to_search){
   static int index; //index count garxa
        if(head == NULL){
            printf("empty list");
        }
        else{
            struct node* ptr = head;
            while(ptr != NULL && ptr -> data != value_to_search ){
                ptr = ptr-> next;
                index++; // each time next list ma janxa index badhxa ek le
            }
            if(ptr == NULL){
                printf("element not found"); //list sakyo element vetena vane
            }
            else
                printf("\n %d found at index %d ",value_to_search,index); //vetyo vane index printf garxa
            
        }
}
void fun(struct node* head){
    if(head==NULL)
    return;
    printf("%d",start->data);
    if(start->next!=NULL)
     fun(start->->next);
     printf("%d",start->data);
}


int main(){
    //head second third sabai stack ma banxa ani heap ma vako memory lai point grxa so pointer banako tnihru lai 
    // remember just like we did with dynamic memory allocation of int datatypes
struct node* head = (struct node*)malloc(sizeof(struct node)); // heap ma memory allocation struct node size ko
struct node* second = (struct node*)malloc(sizeof(struct node));
struct node* third = (struct node*)malloc(sizeof(struct node));


//first node creation
head-> data = 12;
head-> next = second;

//second node creation
second-> data = 14;
second-> next = third;


//third node creation
third-> data = 16;
third-> next = NULL; //pointing to null node yespaxi

display(head); //display garako head pointer pass garera ani remember that linkedlist ma traverse grda jaile ni head bata access hunxa one by one not like array jaha sidha index diyera jun pani accesss grna milthyo
search(head,12);


return 0;
}