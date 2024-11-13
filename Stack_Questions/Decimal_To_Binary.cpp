// #include <iostream>
// using namespace std;

// class Stack {
//     int top;
    
    

// public:
//     int a[32];
//     int a_size=32;

//     Stack() {
//         top = -1;
//     }


//     bool push(int x);
//     int pop();
//     bool isEmpty();
//     bool isFull();
//     void Decimal_To_Binary(int decimal_number);
// };

// bool Stack::push(int x) {
//     if (isFull()) {
//         cout << "Stack Overflow" << endl;
//         return false;
//     } else {
//         a[++top] = x;
//         return true;
//     }
// }

// int Stack::pop() {
//     if (isEmpty()) {
//         cout << "Stack Underflow" << endl;
//         return -1;  // Changed from 0 to -1 to indicate error
//     } else {
//         return a[top--];
//     }
// }

// bool Stack::isEmpty() {
//     return (top < 0);
// }

// bool Stack::isFull() {
//     return (top >= (a_size - 1));
// }

// void Stack::Decimal_To_Binary(int decimal_number) {
//     while (decimal_number > 0) {
//         push(decimal_number % 2);
//         decimal_number /= 2;
//     }
//     cout << "Binary Conversion: ";
//     while (!isEmpty()) {
//         cout << pop();
//     }
//     cout << endl;
// }

// int main() {
//     int d_n;
//     cout << "Enter a Decimal Number for Conversion: ";
//     cin >> d_n;

//     Stack s; // Adjust size according to your needs
//     s.Decimal_To_Binary(d_n);

//     return 0;
// }
//===========================================================================================//
#include <iostream>
using namespace std;
   

class Stack {
    int top;

public:
    int a[10]; 
    int a_size = 10;

    Stack(){ 
        top = -1; 
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void Decimal_To_Binary(int decimal_number) ;

};

bool Stack::push(int x) {
    if (top == (a_size - 1)) {
        cout << "Stack Overflow";
        return false;
    } else {
         top++;
        a[top] = x;
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    } else {
        int x = a[top--];
        return x;
    }
}

int Stack::peek() {
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    } else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0);
}
void Stack::Decimal_To_Binary(int decimal_number) {
    while (decimal_number > 0) {
        push(decimal_number % 2);
        decimal_number /= 2;
    }
    cout << "Binary Conversion: ";
    while (!isEmpty()) {
        cout << pop();
    }
    cout << endl;
}

int main() {
    Stack s;
    int d_n;
    cout<<"Enter a Number for Conversion : ";
    cin>>d_n;
    s.Decimal_To_Binary(d_n);
    return 0;
}