#include<iostream>
using namespace std;

void Ascending_order(int array[], int array_size) {
    for(int i = 0; i < array_size; i++) {
        for(int j = i + 1; j < array_size; j++) {
            if(array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "The Ascending Array is : ";
    for(int i = 0; i < array_size; i++) {
        cout << array[i] << " ";
    }
}

int Binary_Search(int array[], int low_index, int high_index, int search_number) {
    if (low_index <= high_index) {
        int middle_index = (low_index + high_index) / 2;
        if (array[middle_index] == search_number) {
            return middle_index;
        }
        else if (array[middle_index] > search_number) {
            return Binary_Search(array, low_index, middle_index - 1, search_number);
        }
        else {
            return Binary_Search(array, middle_index + 1, high_index, search_number);
        }
    }
    return -1; // Element not found
}

int main() {
    int Example_array[10];
    int example_size;
    int search_number;
    cout << "Enter the size of the array : ";
    cin >> example_size;
    cout << "Enter the element : ";
    for(int i = 0; i < example_size; i++) {
        cin >> Example_array[i];
    }

    Ascending_order(Example_array, example_size);
    cout << "\nEnter the Number to search in array : ";
    cin >> search_number;
    int result = Binary_Search(Example_array, 0, example_size - 1, search_number);
    if(result == -1) {
        cout << "Element not found in array\n";
    }
    else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}
