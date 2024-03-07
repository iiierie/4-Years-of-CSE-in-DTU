#include<stdio.h>
//function for linear search returns index if found 
int linear_search(int arr[], int n, int key){
    int i;
    for( i = 0 ; i < n ; i++ ){
        if(arr[i] == key)
            return i;
    }
    //returns -1 if element not found
    return -1; 
}

int main(){
    int arr[5],i,key,index;
    for(i = 0; i < 5 ; i++){
        printf("Enter the array elements: ");
        scanf("%d",&arr[i]);
    }
        printf("Enter the key to search: ");
        scanf("%d",&key);

    index = linear_search(arr , 5 , key);
     if(index == -1)
        printf(" element not found.");
     else
        printf("The element found at index %d.",index);
return 0;
}