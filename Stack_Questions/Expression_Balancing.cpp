#include <iostream>
#include <string>
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
            arr[++top] = ch;
        }
    }

    char pop() {
        if (top >= 0) {
            return arr[top--];
        }
        return '\0'; // Return null character if stack is empty
    }

    char peek() const {
        if (top >= 0) {
            return arr[top];
        }
        return '\0';
    }

    bool isEmpty() const {
        return top == -1;
    }
};

bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool areParenthesesBalanced(const string& expr) {
    Stack stack;

    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (stack.isEmpty() || !isMatchingPair(stack.pop(), ch)) {
                return false;
            }
        }
    }
    return stack.isEmpty();
}

int main() {
    string expression;

    cout << "Enter an expression: ";
    getline(cin, expression);

    if (areParenthesesBalanced(expression)) {
        cout << "The parentheses are balanced." << endl;
    } else {
        cout << "The parentheses are not balanced." << endl;
    }

    return 0;
}
