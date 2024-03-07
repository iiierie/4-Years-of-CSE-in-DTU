#include<stdio.h>

void print(int arr[],int n){
    int i;
    for(i = 0; i < n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insert_at_index(int arr[], int n, int index , int key){
    int i;
    for(i = (n-1) ; i>=index ; i-- ){
        arr[i+1] = arr[i];
    }
    arr[index] = key;
    n++;
    print(arr,n);
}
int main(){
    int array[20]={1,2,3,4,5};
    int i,n = 5;
    int mid = (0+(n-1))/2;
    insert_at_index(array,n,mid,69);
    return 0;
}