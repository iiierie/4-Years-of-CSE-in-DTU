#include<stdio.h>
//function for binary search returns index if found 
int binary_search(int arr[], int n, int key){
    
     int s = 0 , e = n-1;
    while(s<=e){
        int mid = (s+e) / 2;        
        if(arr[mid] == key)
             return mid;
        else if(arr[mid] < key)
             s = mid + 1;
        else
             e = mid - 1;
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

    index = binary_search(arr , 5 , key);
     if(index == -1)
        printf(" element not found.");
     else
        printf("The element found at index %d.",index);
return 0;
}