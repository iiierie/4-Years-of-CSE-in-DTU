#include<stdio.h>
//n vaneko index of last element in array
//yo function le rearrange grdinxa max heap tree order ma 
void insert(int A[], int n){
    int temp = A[n];
    int i = n;
    while(i>1 && temp > A[i/2] ){
        A[i]= A[i/2];
        i = i/2;
    }
    A[i]= temp;
}

//heap create garnu vaneko one by one array element hru store gardai janu ho
void create_heap(int A[], int n){
    for(int i = 2; i<=n;i++){
        insert(A,n);
    }
}
//delete grda we can only delete the root element ani root is replaced by last ko element
void delete(int A[],int n){
    //swap first and last values
    int x = A[n]; //last ko value
    int first_val = A[1];
    A[1] = x; 
    A[n]= first_val;
    int i = 1;//parent
    int j = 2*i;// its left child
    while(j < n-1){ //until the end of array
        //compare which child (left or right) is biggest so that we can replace with parent 
        if(A[j+1]>A[j]){
            j = j+1;
        }
        if(A[i]<A[j]){
            // basically  swap(A[i],A[j]);
            int temp = A[i];
            A[i]= A[j];
            A[j]= temp;     
            i = j;
            j = 2*i;
        }   
        else{
            break;
        }
    }
}

//basically heapsort ma delete grdai janxa harek element lai 
void heapsort(int A[],int n ){
    for(int i = 0;i<n;i++){
        delete(A,n-i);
    }
}


void display(int A[],int n){
    for(int i = 1; i<=n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(){
    int A[10]= {0,1,2,3,4,5,6};
    display(A,6);
    for(int i = 1; i<=6;i++){
        create_heap(A,i);
    }
    display(A,6);
    heapsort(A,6);
    display(A,6);
    
}