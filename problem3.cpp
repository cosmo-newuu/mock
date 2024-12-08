#include <iostream>
using namespace std;


int findMax(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


void reverseArray(int* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}


double calculateAverage(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / (double)size; 
}

int main() {
    int* arr = nullptr;
    int num, size = 0, capacity = 10;

    arr = new int[capacity];


    while (cin >> num && num != -1) {
        if (size == capacity) {
          
            capacity *= 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
        arr[size++] = num;
    }

   
    if (size > 0) {
        cout << "Maximum value: " << findMax(arr, size) << endl;
    } else {
        cout << "No elements entered." << endl;
    }

    delete[] arr;
    arr = new int[capacity];
    size = 0;

  
    while (cin >> num && num != -1) {
        if (size == capacity) {
            capacity *= 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
        arr[size++] = num;
    }


    if (size > 0) {
        reverseArray(arr, size);
        cout << "Reversed array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No elements entered." << endl;
    }

    
    delete[] arr;
    arr = new int[capacity];
    size = 0;

   
    
    while (cin >> num && num != -1) {
        if (size == capacity) {
            capacity *= 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
        arr[size++] = num;
    }

   
    if (size > 0) {
        cout << "Average: " << calculateAverage(arr, size) << endl;
    } else {
        cout << "No elements entered." << endl;
    }

    
    delete[] arr;

    return 0;
}
