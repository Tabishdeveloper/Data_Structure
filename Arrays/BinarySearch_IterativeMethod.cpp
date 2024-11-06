#include<iostream>
using namespace std;
void Ascending_order(int array[10],int array_size){

for(int i=0;i<array_size;i++){
    for(int j=i+1;j<array_size;j++){
        if(array[i]>array[j]){
            // Just using for Swap
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
// Create a Function Which do Binary Search in Array
int Binary_Search(int low_index,int high_index,int search_number,int array[10]){
    while(low_index<=high_index){
        int middle_index = (low_index+high_index)/2;
        if(array[middle_index]==search_number){
            return middle_index;
        }
// If the Target element is less than the element at the middle index => value present in left half
// set high index to middle -1       
        else if(array[middle_index]>search_number){
            high_index = middle_index - 1 ;
        }
// If the Target element is greater than the element at the middle index => value present in right half
// set low index to middle + 1 
        else{
            low_index = middle_index + 1 ;
        }
    }
    return -1;
}
int main(){
int Example_array[10];
int example_size;
int seacrh_number;
cout<<"Enter the size of the array : ";
cin>>example_size;
    cout<<"Enter the element : ";
for(int i=0;i<example_size;i++){
    cin>>Example_array[i];
}

Ascending_order(Example_array,example_size);
cout<<"\nEnter the Number to search in array : ";
cin>>seacrh_number;
int result = Binary_Search(0,example_size-1,seacrh_number,Example_array);
if(result == -1){
    cout<<"Element not found in array\n";
}
else{
    cout<<"Element found at index "<<result<<endl;
}
return 0;
}