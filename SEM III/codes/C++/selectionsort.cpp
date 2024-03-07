#include<iostream>
using namespace std;
/*algorithm
1. outer loop runs from 0 to second last element samma kinaki last element sorted vaisakeko hunxa garda grda
    2. consider first element lai minimum
    3. inner loop fro i+1 dekhi last element samma traverse  garne to compare if minimum vanda ni sano kunai xa ki xaina 
        if yes swap grdine 
4.stop
*/


void selectionsort(int a[],int n){
    //loop i runs from 0 to n-2 second last element samma kinaki last ko bacheko euta ta obv sorted hunxa 
    for(int i=0;i<=n-2;i++){
        //consider first element as minimum
        int min = i; //min stores the index 
        //loop to replace a new minimum element //loop j runs from i+1 to n-1 last element samma
        for(int j=i+1;j<=n-1;j++){
            if(a[j] < a[min]){
                min = j;
            }
            //swap the minimum element 
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }      
    }
}

//display function
void display(int arr[], int n){
    for(int i = 0; i<n;i++){
     cout << arr[i]<<" " ;        
    }
}

//we pass array and its size 
int main(){
    int array[7] = {3,2,4,3,6,7,2};
    selectionsort(array,7);
    display(array,7);
}