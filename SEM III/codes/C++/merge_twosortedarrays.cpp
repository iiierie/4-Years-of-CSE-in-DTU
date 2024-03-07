#include<iostream>
using namespace std;

void mergetwoarrays(int arr1[],int n, int arr2[],int m,int arr3[]){
    int i=0,j=0,k = 0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n){
            arr3[k++] = arr1[i++];
    }
    while(j<m){
            arr3[k++] = arr2[j++];
    }
}
//display function
void display(int arr[], int n){
    for(int i = 0; i<n;i++){
     cout << arr[i]<<" " ;        
    }
}

int main(){
    int arr1[4]={1,3,4,5};
    int arr2[5]={2,10,23,45,67};
    int arr3[9];

    mergetwoarrays(arr1,4,arr2,5,arr3);
    display(arr3,9);
}