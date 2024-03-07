#include<iostream>
using namespace std;
int main(){
    int array[5],reverse[5];
    for (int i=0;i<5;i++){
    cin>>array[i];
    }
    for(int i = 0;i<5;i++){
        reverse[i]=array[4-i];
        cout<<reverse[i]<< "\t";
        }
    return 0;
    }
