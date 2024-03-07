#include<iostream>
#include<string>
using namespace std;

void reverse(string &st,int s,int e){
    while(s<=e){
            swap(st[s],st[e]);
            s++;
            e--;
    }
    }

string string_reverse(string str){
    int s = 0;
    int e = str.length()-1;
    for(int i = 0; i<=e ; i++){
        if(str[i] == ' '){
            reverse(str, s, i-1);
            s = s + i;
        }
        if(str[i] == '\0'){
            reverse(str, s, i-1);
        }
    } 
   reverse(str, s, e);
   return str;
}

int main(){
    string str = "the blue sky";
    string rev = string_reverse(str);
    
    cout << str<<endl;
    cout << rev;
    return 0;
}