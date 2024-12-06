#include <iostream>
#include <vector>
using namespace std;

int findMax(int* arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

void reverseArray(int* arr, int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

double calculateAverage(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {
    vector<int> numbers;
    int num;

    // Read input sequence terminated by -1
    while (cin >> num && num != -1) {
        numbers.push_back(num);
    }

    int* arr = &numbers[0];
    int size = numbers.size();


    cout << "Maximum value: " << findMax(arr, size) << endl;


    reverseArray(arr, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Average: " << calculateAverage(arr, size) << endl;

    return 0;
}
