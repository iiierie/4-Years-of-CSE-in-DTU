#include<iostream>
using namespace std;


void merge(int *arr,int s,int e){
    int mid = (s+e)/2; //mid element
    int l1 = mid-s + 1 ; //length of new array1 for left side to make
    int l2 = e - mid ; //length of new array2 for right side to make
    int* a1 = new int(l1); //dynamic memory allocation 
    int* a2 = new int(l2);

    //copy elements from main array to each left and right array
        int k = s ; //index of main array
        for(int i = 0 ; i < l1 ; i++){
            a1[i] = arr[k++]; //left elements copy grya
        }
        k = mid + 1 ; //index of main array
        for(int i = 0 ; i < l2 ; i++){
            a2[i] = arr[k++]; //right elements copy gareko
        }


    //merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    k = s;
    while(index1 < l1 && index2 < l2){
        if(a1[index1] < a2[index2]){
            arr[k++] = a1[index1++];
        }
        else{
            arr[k++] = a2[index2++];
        }
    }
    while(index1 < l1){
        arr[k++] = a1[index1++];
    }
    while(index2<l2){
        arr[k++] = a2[index2++];
    }

}

void mergesort(int arr[],int s,int e){

    if(s >= e){ //never forget the base case
        return;
    }
    int mid = ( s + e ) / 2;
    mergesort(arr,s,mid); //left side lai merge sorting
    mergesort(arr,mid+1,e); //right side lai merge sorting
    merge(arr,s,e);
}


//display function
void display(int arr[],int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main(){
    int array[5]={2,5,1,6,9};
    mergesort(array,0,4);
    display(array,5);
}