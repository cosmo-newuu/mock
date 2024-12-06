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

// Function to reverse the array in place
void reverseArray(int* arr, int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}


double calculateAverage(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main() {
    int arr[100], size;


 
    size = 0;
    while (true) {
        cin >> arr[size];
        if (arr[size] == -1) break;
        size++;
    }
    int max = findMax(arr, size);
    cout << "Maximum value: " << max << endl;

   
    
    size = 0;
    while (true) {
        cin >> arr[size];
        if (arr[size] == -1) break;
        size++;
    }
    reverseArray(arr, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    
    size = 0;
    while (true) {
        cin >> arr[size];
        if (arr[size] == -1) break;
        size++;
    }
    double avg = calculateAverage(arr, size);
    cout << "Average: " << avg << endl;

    return 0;
}
