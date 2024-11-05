#include<iostream>
using namespace std;
int main(){
                // Deletion at the beginning of Array Data Structure //
    int n;
    int array[10];
    cout<<"Enter the size of Array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> array[i];

    }
    for(int i=0;i<n-1;i++){
        array[i] = array[i+1];
    }
    // This n++ used to decrease the array size to adjust all elements in array
    n--;
    cout<<"Elements of Array : ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }


    return 0;
}