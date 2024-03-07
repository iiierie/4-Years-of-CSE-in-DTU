#include<iostream>
#include<vector>
using namespace std;

//function takes vector as input and returns vector as output
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

void prints(vector<int> vec){
    for(int i = 0; i<vec.size();i++){
        cout<< vec[i] << " ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int element;
    for(int i=0 ; i < 10; i++){
        cout<<"enter : "<<endl;
                cin>>element;
        v.push_back(element);
    }
    prints(v);
    vector<int> answer = reverse_array(v);
    cout<<"after reverse"<<endl;
    prints(answer);
    return 0;
}