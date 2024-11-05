#include<iostream>
using namespace std;
int main(){
                // Insertion at any Position of Array Data Structure //
    int n,x,position;
    int array[10];
    cout<<"Enter the size of Array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> array[i];

    }
    cout<<"Enter the insertion location : ";
    cin>>position;
    cout<<"Enter the element to be inserted : ";
    cin>>x;
    for(int i=n-1;i>position-1;i--){
        array[i+1] = array[i];
    }
    array[position-1]=x;
    // This n++ used to increase the array size to adjust all elements in array
    n++;
    cout<<"Elements of Array : ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }


    return 0;
}