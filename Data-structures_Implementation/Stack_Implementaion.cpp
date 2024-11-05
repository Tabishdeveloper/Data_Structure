// Stack Implementation using Arrays
#include<iostream>
using namespace std;
int stack[8];
int top = -1;
int n = 8;
// Create a push Function to  push value in stack
void push(int value){
    if(top == n-1){
        cout<<"Stack is full "<<endl;
    }
    else{
        top++;
        stack [top] = value;
    }

}
// Create a pop Function to pop value  from stack
void pop(){
    if(top ==-1){
        cout<<"Stack is empty "<<endl;

    }
    else{
        cout<<"\nThe Popped elements : "<< stack[top]<<" ";
        top--;
    }
}
// Create a Display Function
void display(){
    if (top>=0){
// This patch of code show result from Top to Bottom
        // cout<<"Stack elments are : ";
        // for(int i= top;i>=0;i--){
        //     cout<<stack[i]<<" ";
        // }
// This patch of code show result from bottom to top
        cout<<"Stack elments are : ";
        for(int i= 0;i<=top;i++){
            cout<<stack[i]<<" ";
        }
    }
    else{
        cout<<"Stack is empty\n";
    }
}
int main(){
    // push(1);
    // push(2);
    // push(3);
    // push(4);
    // push(5);
    // push(6);
    // push(7);
    // push(8);
    for(int i=1;i<=8;i++){
        push(i);
    }
    display();
    pop();
   

    return 0;
}

//===================================================================================================//
//=====================================STACK USING OOP==========================================//
// #include <iostream>
// #define MAX 1000

// class Stack {
//     int top;

// public:
//     int a[MAX]; // Maximum size of Stack

//     Stack() { top = -1; }
//     bool push(int x);
//     int pop();
//     int peek();
//     bool isEmpty();
// };

// bool Stack::push(int x) {
//     if (top == (MAX - 1)) {
//         std::cout << "Stack Overflow";
//         return false;
//     } else {
//          top++;
//         a[top] = x;
//         std::cout << x << " pushed into stack\n";
//         return true;
//     }
// }

// int Stack::pop() {
//     if (top < 0) {
//         std::cout << "Stack Underflow";
//         return 0;
//     } else {
//         int x = a[top--];
//         return x;
//     }
// }

// int Stack::peek() {
//     if (top < 0) {
//         std::cout << "Stack is Empty";
//         return 0;
//     } else {
//         int x = a[top];
//         return x;
//     }
// }

// bool Stack::isEmpty() {
//     return (top < 0);
// }

// int main() {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     std::cout << s.pop() << " Popped from stack\n";
//     return 0;
// }
