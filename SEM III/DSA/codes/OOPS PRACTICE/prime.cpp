//simple 

#include <iostream>

using namespace std;

int main()
{
    int number,i,flag=0;
    cout<<"enter any number to check prime or not: "<<endl;
    cin>>number;
    for(i=2; i<= (number/2);i++){
        if(number % i == 0){
            flag = 1;
            break;
        }
        else if(number%i != 0){
            int flag = 0;
        }
        
    }
  if(flag==0)
  cout<<"prime";
  else
  cout<<"not prime";
  
  return 0;
}

//using function

#include<iostream>
using namespace std;
void prime(int n){
    int i,flag=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
        flag=1;
        break;
        }
    }
    if(flag==1)
        cout<<"not prime";
    else
        cout<<"prime";
    }
    

int main(){
    int number;
    cout<<"enter number to check prime or not: ";
    cin>>number;
    prime(number);
    return 0;
}
