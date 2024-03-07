#include<iostream>
#include<vector>
//this program moves all zero to the right side of array

using namespace std;
void prints(vector<int> vec){
    for(int i = 0; i<vec.size();i++){
        cout<< vec[i] << " ";
    }
    cout<<endl;
}
vector<int> sortnonzero(vector<int> vec){
    int i  = 0;
    for(int j = 0 ; j<vec.size();j++){
        if(vec[j] != 0 ){
            swap(vec[j],vec[i]);
            i++;
        }
    }
    return vec;
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
   vector<int> ans = sortnonzero(v);
   prints(ans);
    return 0;
}