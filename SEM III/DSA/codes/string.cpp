#include<iostream>
#include<cstring>
using namespace std;
class strings{
    char str[20];
  public:
  void getstring(){
    cin>>str;
  }
  void displaystring(){
    cout<<str;
  }
strings operator + (strings x){
    strings result;
    strcat(str,x.str);
    strcpy(result.str,str);
    return result;
}
};
int main(){
    strings s1;
    s1.getstring();
    strings s2;
    s2.getstring();
    strings s3;
    s3= s1+s2;
    s3.displaystring();
    return 0;
}