#include <iostream>
#include <vector>
using namespace std;


int findMax(const vector<int>& arr) {
    int max = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void reverseArray(vector<int>& arr) {
    for (size_t i = 0; i < arr.size() / 2; i++) {
        swap(arr[i], arr[arr.size() - i - 1]);
    }
}


double calculateAverage(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum / (double)arr.size();
}

int main() {
    vector<int> arr;
    int num;

    
    while (cin >> num && num != -1) {
        arr.push_back(num);
    }


    if (!arr.empty()) {
        cout << "Maximum value: " << findMax(arr) << endl;
    } else {
        cout << "No elements entered." << endl;
    }


    arr.clear();

    while (cin >> num && num != -1) {
        arr.push_back(num);
    }


    if (!arr.empty()) {
        reverseArray(arr);
        cout << "Reversed array: ";
        for (int val : arr) {
            cout << val << " ";
        }
        cout << endl;
    } else {
        cout << "No elements entered." << endl;
    }


    arr.clear();

    while (cin >> num && num != -1) {
        arr.push_back(num);
    }


    if (!arr.empty()) {
        cout << "Average: " << calculateAverage(arr) << endl;
    } else {
        cout << "No elements entered." << endl;
    }

    return 0;
}
