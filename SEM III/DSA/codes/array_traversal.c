#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int size){
    printf("\n your array is:\n ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
//min value ko lagi suru ma first element lai min banaune ani if min vanda sano vetyo vane swap
void min_val(int arr[],int size){
    int min = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i] < min)
            min = arr[i];
    }
    printf("\n min value : %d ",min);

}

int linear_search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return i;
        }
     return -1;
    }
}
int main(){
    int n,i;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter %d elements of array: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    display(array,n);
    min_val(array,n);
    int index = linear_search(array,n,2);
        if(index != -1)
        printf("\n found at index %d: ",index );
        else
        printf("\n not in the array ");
}