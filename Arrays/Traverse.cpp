#include<iostream>
using namespace std;
int main(){
    // Array Traversing 
    int marks[5] = {10,20,30,40,50};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    // Another way
    for (int i=0;i<5;i++){
        cout<<marks[i]<<endl;

    }
    return 0 ;
}