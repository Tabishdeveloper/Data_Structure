#include<iostream>
using namespace std;
void Ascending_order(int array[10],int array_size){

for(int i=0;i<array_size;i++){
    for(int j=i+1;j<array_size;j++){
        if(array[i]>array[j]){
            // Just usinfg for Swap
            int temp=array[i];
            array[i] = array[j];
            array[j]= temp;
        }
    }
    
}
cout<<"The Ascending Array is : ";
for(int i=0;i<array_size;i++){
    cout<<array[i]<<" ";
}
}
int main(){
int Example_array[10];
int example_size;
cout<<"Enter the size of the array : ";
cin>>example_size;
for(int i=0;i<example_size;i++){
    cout<<"Enter the element "<<i+1<<" : ";
    cin>>Example_array[i];
}
Ascending_order(Example_array,example_size);
return 0;
}