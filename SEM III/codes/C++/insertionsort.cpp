// insertion sort ma swap haina shift grnu prxa
// yo sorting ma chai sorted ra unsorted array maintain // unsorted ko element lai sorted ko harek snga compare to see if it is grater or smaller and then keep it in its respective place 

/* algorithm:
1. first element is always sorted so i lai 1 dekhi last element samma loop ani temp variable ma store grdine i lai 
2. tespaxi j maintain garne so that we can compare temp with harek element of sorted array
3. j chahi i-1 dekhi 0 samma hunxa ani 
        if smaller number vetyo vane left tira place grdine
        else break grdine cause it already is in its place
4. finally khali bacheko thau ma gayera place grdine 
*/
//10 1 7 4 8 2 11


#include<iostream>
using namespace std;
void insertionsort(int array[],int n){
    //first element sorted nai hunxa so 1 dekhi n-1 samma
    for(int i=1;i<=n-1;i++){
        int temp = array[i];
        //j chahi  i-1 to 0 samma so that we can compare
        int j=i-1;
            for(;j>=0;j--){
                if(array[j] > temp){
                    array[j+1] = array[j]; //shifting elements
                }
                else {break;}
}
//placing in respective position
        array[j+1]= temp;
}
}

//display function
void display(int arr[], int n){
    for(int i = 0; i<n ; i++){
     cout << arr[i]<<" " ;        
    }
}

int main(){
int array[]={4,2,3,0,7,5,2,1,3,1};
insertionsort(array,10);
display(array,10);
}