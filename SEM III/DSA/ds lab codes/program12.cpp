#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

class Stack{
public:
    int capacity;
    int top;
    int arr[1000001];
    
    Stack(int capacity){
        this -> capacity = capacity;
        this -> top = -1;
    }
    
    bool isFull(Stack * stack){
        return (stack -> top == stack -> capacity - 1);
    }

    bool isEmpty(Stack * stack){
        return (stack -> top == -1);
    }

    void push(Stack * stack, int item){
        if(isFull(stack)){
            return;
        }
        stack -> arr[++stack -> top] = item;
    }

    int pop(Stack * stack){
        if(isEmpty(stack)){
            return INT_MIN;
        }
        return stack -> arr[stack -> top--];
    }

    void moveDisks(Stack * src, Stack * dest, char s, char d){
        int pole1 = pop(src);
        int pole2 = pop(dest);

        if(pole1 == INT_MIN){
            push(src, pole2);
            move(d, s, pole2);
        }
        
        else if(pole2 == INT_MIN){
            push(dest, pole1);
            move(s, d, pole1);
        }

        else if(pole1 > pole2){
            push(src, pole1);
            push(src, pole2);
            move(d, s, pole2);
        }

        else{
            push(dest, pole2);
            push(dest, pole1);
            move(s, d, pole1);
        }
    }

    void move(char fromPeg, char toPeg, int disk){
        cout<<"Move the disk "<<disk<<" from "<<fromPeg<<" to "<<toPeg<<'\n';
    }

    void Iterative(int num, Stack * src, Stack * aux, Stack * dest){

        int i, total_num_of_moves;
        char s = 'S', d = 'D', a = 'A';

        if(num % 2 == 0){
            char temp = d;
            d = a;
            a = temp;
        }
        total_num_of_moves = (int)(pow(2, num) - 1);
        for(i = num; i >= 1; i--){
            push(src, i);
        }

        for(i = 1; i <= total_num_of_moves; i++){
            if(i % 3 == 1){
                moveDisks(src, dest, s, d);
            }
            else if(i % 3 == 2){
                moveDisks(src, aux, s, a);
            }
            else if(i % 3 == 0){
                moveDisks(aux, dest, a, d);
            }
        }
    }
};

int main(){
    int num = 3;
    Stack * src, * dest, * aux;
    src = new Stack(num);
    dest = new Stack(num);
    aux = new Stack(num);
    Stack * sol = new Stack(0);
    sol -> Iterative(num, src, aux, dest);
    return 0;
}