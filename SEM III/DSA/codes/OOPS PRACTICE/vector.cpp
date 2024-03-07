#include<iostream>
#include<vector> //vector ko capacity doubles and doubles if not enough size  
using namespace std;

//size vaneko given capacity ma kati full xa tyo vaneko size ho
//display function //vector.size() le size return grdinxa 
void display(vector <int> & v){
    cout<<"your vector array: "<<endl;
    for(int i = 0; i< v.size(); i++){
        cout<<v[i] << " ";
    }
}

//main function 
int main(){
    int element,t;
    vector<int> vec1; // vector<int> is the datatype jasto treat garne // //empty vector //default constructor
    vector<int> vec2(5); //5 capacity vako vector banako
    vector<int> vec3(vec2); //copy constructor //vec2 ko copy
    vector<int> vec4(5,69); //5 capacity vako vector // harek lai 69 le init grdinxa default ma chai 0 hunxa // 69 69 69 69 69 is the vector formed.
    cout<<"how many elements? "<<endl;
    cin>>t;
    for( int i = 0 ; i < t ; i++ ){
    cout << "enter element to add to the vector : " <<endl;
    cin>>element;
    vec1.push_back(element);
    cout<<"capacity:"<<vec1.capacity()<<endl;
    }
    display(vec1);

    cout<<endl<< "after popping"<<endl;
    vec1.pop_back(); //deletes one element last bata
    display(vec1);

    //Front ko element show grdinxa
    cout<<endl;
    cout<<"Front element is "<<vec1.front()<<endl;
    
    //back ko element show grdinxa
    cout<<endl;
    cout<<"back element is "<<vec1.back()<<endl;

    //69 insertion gardinxa before iterator 
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter,5,69); //begin vaneko index 0 ko agadi 
    vec1.insert(iter+1,5,69); //iter +1 vanesi 0+1 index ma ani so on like iter+2 or iter+3 so on. 
    display(vec1);

    return 0;
}



/*
Iterators:

begin	Return iterator to beginning (public member function)
end	    Return iterator to end (public member function)
rbegin	Return reverse iterator to reverse beginning (public member function)
rend	Return reverse iterator to reverse end (public member function)
cbegin	Return const_iterator to beginning (public member function)
cend	Return const_iterator to end (public member function)
crbegin	Return const_reverse_iterator to reverse beginning (public member function)
crend	Return const_reverse_iterator to reverse end (public member function)
*/

/*
constructors: 
  std::vector<int> first;                                // empty vector of ints
  std::vector<int> second (4,100);                       // four ints with value 100
  std::vector<int> third (second.begin(),second.end());  // iterating through second
  std::vector<int> fourth (third);                       // a copy of third
*/