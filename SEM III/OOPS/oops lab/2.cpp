// 2. WAP to implement Call of Reference 
//and reverse an array using Swap function
#include<iostream>
using namespace std;

void swap_arr(int* arr,int n){
    int s = 0;
    int e = n - 1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}
void display_arr(int arr[],int n){
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array[5]={1,2,3,4,5};
    cout<<("before swapping ");
    display_arr(array,5);
    cout<<("\nafter swapping ");
    swap_arr(array,5);
    display_arr(array,5);
    return 0;
}