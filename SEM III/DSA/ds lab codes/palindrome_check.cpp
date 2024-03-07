#include<iostream>
#include<deque>
#include<string>
using namespace std;
int pal_check(string str){
    deque<char> deq;
    int length_of_String = str.length();
    for(int i = 0; i< length_of_String ; i++){
        deq.push_back(str[i]);
        }
    int check = 1; 
    while(deq.size() > 1  && check){
        char first_letter = deq.front();
        deq.pop_front();
        char last_letter = deq.back();
        deq.pop_back();

        if( first_letter != last_letter){
            check = 0; //not palindrome 
        }
    }
    return check ; 
}
using namespace std;
int main(){
 string a = "madam";
 cout<< pal_check(a) <<endl;
 cout<< pal_check("random") <<endl;
return 0;
}