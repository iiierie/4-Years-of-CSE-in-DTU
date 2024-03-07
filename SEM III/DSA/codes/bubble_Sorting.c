#include<stdio.h>
void bubblesort(int array[], int n){
    int j;
    for(int i=0;i<n-1;i++){
       int flag = 1;
       for(j=0;j= n-1-i;j++){
        if(array[j]>array[j+1]){
            flag = 0;
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }
        }
        if(flag){
            break;
       }
    }
}

int main(){
    int arr[]={1,4,3,5,6,7,8,2};


bubblesort(arr,8);

printf("\n");
for(int i = 0; i < 8; i++)
printf("%d ", arr[i]);
return 0;

}