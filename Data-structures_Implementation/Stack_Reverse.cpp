#include <iostream>
#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void reverse();
private:
    void insertAtBottom(int x);
};

bool Stack::push(int x) {
    if (top == (MAX - 1)) {
        std::cout << "Stack Overflow";
        return false;
    } else {
        a[++top] = x;
        std::cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {
        std::cout << "Stack Underflow";
        return 0;
    } else {
        int x = a[top--];
        return x;
    }
}

int Stack::peek() {
    if (top < 0) {
        std::cout << "Stack is Empty";
        return 0;
    } else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0);
}

void Stack::insertAtBottom(int x) {
    if (isEmpty()) {
        push(x);
    } else {
        int temp = pop();
        insertAtBottom(x);
        push(temp);
    }
}

void Stack::reverse() {
    if (!isEmpty()) {
        int temp = pop();
        reverse();
        insertAtBottom(temp);
    }
}

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Original Stack: ";
    while (!s.isEmpty()) {
        std::cout << s.peek() << " ";
        s.pop();
    }
    std::cout << std::endl;

    s.push(10);
    s.push(20);
    s.push(30);

    s.reverse();

    std::cout << "Reversed Stack: ";
    while (!s.isEmpty()) {
        std::cout << s.peek() << " ";
        s.pop();
    }
    std::cout << std::endl;

    return 0;
}
