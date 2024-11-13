// Queue Implementation using Arrays
#include<iostream>
using namespace std;
class Queue{
    private:
    int enqueue;
    int dequeue;
    public:
    Queue(){
        enqueue = -1;
        dequeue = -1;
    }
    int Queue_size = 10;
    int Queue_Array[10];
    void Enqueue(int value);
    void Dequeue();


};
    void Queue:: Enqueue(int value){
        if(enqueue==Queue_size-1){
            cout<<"Queue is Full\n";
            
        }
        else{
            if(dequeue==-1){
                dequeue = 0;
            }
            cout<<value <<" Added to Queue\n";
            enqueue++;
            Queue_Array[enqueue] = value;
            

        }
    }
    void Queue::Dequeue(){
        if(dequeue==-1){
            cout<<"Queue is Empty\n";
        }
        
        else{
            cout<<"Element Removed from Queue : "<<Queue_Array[dequeue]<<endl;
            if(enqueue==dequeue){
            enqueue =-1;
            dequeue =-1;
        }
            else{

            dequeue++;
        }

        }
    }
    int main(){
        Queue q;
        q.Enqueue(10);
        q.Enqueue(20);
        q.Enqueue(30);
        q.Dequeue();
        q.Dequeue();
    }
