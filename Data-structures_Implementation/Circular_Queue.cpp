#include <iostream>
using namespace std;

class CircularQueue {
private:
    int front;
    int rear;
    static const int length = 5;
    int arr[length];

public:
    CircularQueue() : front(-1), rear(-1) {}

    bool isFull() {
        return (rear + 1) % length == front;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }
        // if (isEmpty()) {
        //     front = rear = 0;
        // }
         else {
            rear = (rear + 1) % length;
        }
        arr[rear] = value;
        cout << value << " added to the queue\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Element removed from queue: " << arr[front] << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % length;
        }
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Queue elements are: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % length;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.displayQueue();
    q.dequeue();
    q.displayQueue();
    q.enqueue(60);
    q.displayQueue();
    q.dequeue();
    q.dequeue();
    q.displayQueue();
    return 0;
}
