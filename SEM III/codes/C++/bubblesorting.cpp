//bubble sort ma chahi duita adjacent elements bich comparison hunxa ani smaller one agadi auxa larger one vanda
//inner loop chai runs for checking each 2 element kun chai greater or smaller vanera harek pass ma ani harek pass badhdai janxa euta euta element kam compare grnu prxa because already sorted so n-i-1 gareko j loop lai
//outer loop for each passes i,e i from 0 dekhi n-1 samma


/*algorithm 

1. outer loop for total passes from 0 to n-1 
  2. inner loop for each passes from 0 to n-i-1 (harek ptk ghatdai janxa cause list ko last element ma obviously highest store vaisakeko hunxa so patak patak check nagrne )
      if(agadi ko element larger than paxadi ko element) then swap garde
3. stop
*/

#include <iostream>
using namespace std;
void bubble_sort(int arr[],int n){
// k is for n passes
    for(int i = 1 ; i < n-1 ; i++){
     int flag = 0; //flag 0 means sorted
        //for one pass 
            for(int j = 0; j<=n-i-1;j++){
                if( arr[j] > arr[j+1] )
                {
                    swap(arr[j],arr[j+1]);
                    flag = 1;
                }
            }
            if(flag == 0)
            break;

    }
}

//display function
void display(int arr[], int n){
    for(int i = 0; i<n;i++){
     cout << arr[i]<<" " ;        
    }
}

int main(){
    int array[]={4,1,78,2,1};
    bubble_sort(array,5);
    display(array,5);
}