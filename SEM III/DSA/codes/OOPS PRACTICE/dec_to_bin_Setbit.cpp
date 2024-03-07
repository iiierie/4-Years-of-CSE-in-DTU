/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int
dec_to_bin (int n)
{
  int binary = 0, digit, i = 0;
  while (n != 0)
    {
      digit = n % 2;
      binary = (pow (10, i) * digit) + binary;
      n = n >> 1;
      i++;
    }
  return binary;
}

int counting(int z){
    int counter=0;
     while(z){        
     if((z & 1) == 1){
     counter+=1;
    }
        z=z>>1;
}
    return counter;
 }

int main(){
  int a, b;
  cin >> a;
  int first = dec_to_bin (a);
   int bit_number = counting(a);
  cout << first << " "<<bit_number;
  return 0;
}
