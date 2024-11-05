#include<iostream>
using namespace std;
int main(){
                // Insertion at the beginning of Array Data Structure //
    int n,x;
    int array[10];
    cout<<"Enter the size of Array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> array[i];

    }
    cout<<"Enter the element at the beginning : ";
    cin>>x;
    for(int i=n;i>0;i--){
        array[i] = array[i-1];
    }
    array[0]=x;
    // This n++ used to increase the array size to adjust all elements in array
    n++;
    cout<<"Elements of Array : ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }


    return 0;
}