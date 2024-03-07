//5 digit
#include<iostream>
int main(){
    int number,n=0;
    using namespace std;
    cout<<"enter a number";
    cin>>number;
    for(int i=1;i<=5;i++){
        int rem = number % 10;
        n = n*10 + rem;
        number=number/10;
    }
    cout<<n;
    return 0;
}

//any digit
#include<iostream>
int main(){
    int number,n=0;
    using namespace std;
    cout<<"enter a number";
    cin>>number;
    while(number!=0){
        int rem = number % 10;
        n = n*10+rem;
        number = number/10;
    }
    cout<<n;
    return 0;
}