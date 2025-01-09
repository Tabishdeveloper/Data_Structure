#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Node class for expression tree
class Node {
public:
    string data;
    Node* left;
    Node* right;
    
    Node(string value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Stack class implementation
class Stack {
private:
    static const int MAX_SIZE = 100;
    Node* arr[MAX_SIZE];
    int top;
    
public:
    Stack() {
        top = -1;
    }
    
    void push(Node* node) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = node;
    }
    
    Node* pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return nullptr;
        }
        return arr[top--];
    }
    
    Node* peek() {
        if (top < 0) {
            return nullptr;
        }
        return arr[top];
    }
    
    bool isEmpty() {
        return (top < 0);
    }
};

// Expression Tree class
class ExpressionTree {
private:
    Node* root;
    
    bool isOperator(string c) {
        return (c == "+" || c == "-" || c == "*" || c == "/");
    }
    
    void inorderHelper(Node* node) {
        if (node) {
            inorderHelper(node->left);
            cout << node->data << " ";
            inorderHelper(node->right);
        }
    }
    
    int evaluateHelper(Node* node) {
        if (!node) return 0;
        
        if (!node->left && !node->right) {
            return stoi(node->data);
        }
        
        int leftVal = evaluateHelper(node->left);
        int rightVal = evaluateHelper(node->right);
        
        if (node->data == "+") return leftVal + rightVal;
        if (node->data == "-") return leftVal - rightVal;
        if (node->data == "*") return leftVal * rightVal;
        if (node->data == "/") return leftVal / rightVal;
        
        return 0;
    }
    
public:
    ExpressionTree() {
        root = nullptr;
    }
    
    void buildTree(string postfix) {
        Stack stack;
        stringstream ss(postfix);
        string token;
        
        while (ss >> token) {
            Node* newNode = new Node(token);
            
            if (!isOperator(token)) {
                stack.push(newNode);
            }
            else {
                newNode->right = stack.pop();
                newNode->left = stack.pop();
                stack.push(newNode);
            }
        }
        
        root = stack.pop();
    }
    
    void inorderTraversal() {
        inorderHelper(root);
        cout << endl;
    }
    
    int evaluate() {
        return evaluateHelper(root);
    }
};

int main() {
    ExpressionTree tree;
    string postfix;
    
    cout << "Enter postfix expression (space-separated): ";
    getline(cin, postfix);
    
    tree.buildTree(postfix);
    
    cout << "Inorder traversal: ";
    tree.inorderTraversal();
    
    cout << "Result: " << tree.evaluate() << endl;
    
    return 0;
}