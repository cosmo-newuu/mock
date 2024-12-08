#include <iostream>
#include <vector>
using namespace std;


int sumEvenNumbers(const vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        if (num % 2 == 0) {
            sum += num;
        }
    }
    return sum;
}


int longestConsecutiveSubsequence(const vector<int>& numbers) {
    if (numbers.empty()) return 0;

    int maxLength = 1, currentLength = 1;
    for (size_t i = 1; i < numbers.size(); i++) {
        if (numbers[i] == numbers[i - 1]) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }
    maxLength = max(maxLength, currentLength);
    return maxLength;
}

int main() {
    vector<int> numbers;
    int num;

    cout << "Enter numbers (-1 to end): ";
    while (cin >> num && num != -1) {
        numbers.push_back(num);
    }

    cout << "Sum of even numbers: " << sumEvenNumbers(numbers) << endl;
    cout << "Length of longest consecutive subsequence: " << longestConsecutiveSubsequence(numbers) << endl;

    return 0;
}
