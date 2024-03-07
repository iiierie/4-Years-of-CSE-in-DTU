#include<iostream>
#include<vector>

using namespace std;
vector<int> reverse_array(vector<int> v){
    int s = 0;  //index at beginning of array
    int e = v.size()-1; //index at last element 
    while(s<=e){
        swap(v[s],v[e]); //ani duita lai swap grdine
        s++; //start lai badhaune
        e--; //endl̥ai ghataune
    }
    return v;
}
void add(vector<int> a , vector<int>b){
    vector<int> answer;
    int count = 0;
    int n = a.size() - 1;
    int m = b.size() - 1;
    while(n>=0 && m>=0){
        int sum = a[n] + b[m]+ count;
         count = sum / 10;
         sum = sum % 10;
         answer.push_back(sum);
         n--;
         m--;
    }
    while(n>=0){
        int sum = a[n] + count ;
        count = sum / 10;
        sum = sum % 10;
        answer.push_back(sum);
        n--;
    }
    while(m>=0){
        int sum = b[m] + count ;
        count = sum / 10;
        sum = sum % 10;
        answer.push_back(sum);
        m--;
    }
    
    while(count!= 0){
        int sum = count ;
        count = sum / 10;
        sum = sum % 10;
        answer.push_back(sum);
    }
    answer = reverse_array(answer);
    for(int i = 0 ; i<answer.size() ; i++){
        cout<< answer[i]<<" ";
    }
}

int main(){
    vector<int> a;
    vector<int> b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    b.push_back(6);
    add(a,b);
    return 0;
}