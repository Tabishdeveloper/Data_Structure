#include <iostream>
#include<string>
using namespace std;

class Stack {
private:
    static const int maxSize = 100; // Maximum size of the stack
    char arr[maxSize];
    int top;

public:
    Stack() : top(-1) {}

    void push(char ch) {
        if (top < maxSize - 1) {
            top++;
            arr[top] = ch;
        }
    }

    char pop() {
        if (top >= 0) {
            return arr[top--];
            
        }
        return '\0'; // Return null character if stack is empty
    }

    bool isEmpty() const {
        return top == -1;
    }
};

class StringReverser {
public:
    string reverse(const string& str) {
        Stack stack;
        for (char ch : str) {
            stack.push(ch);
        }

        string reversed;
        while (!stack.isEmpty()) {
            reversed += stack.pop();
        }

        return reversed;
    }
};

int main() {
    StringReverser reverser;
    string input;

    cout << "Enter a string to reverse: ";
    // cin.ignore();
    getline(cin, input);

    string reversed = reverser.reverse(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
