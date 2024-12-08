#include <iostream>
using namespace std;

int sumEvenNumbers() {
    int sum = 0, num;
    cout << "Enter numbers (-1 to end): ";
    while (cin >> num && num != -1) {
        if (num % 2 == 0) sum += num;
    }
    return sum;
}


int longestConsecutiveSubsequence() {
    int num, prevNum, currentLength = 1, maxLength = 1;
    cout << "Enter numbers (-1 to end): ";
    
    cin >> prevNum;
    if (prevNum == -1) return 0;

    while (cin >> num && num != -1) {
        if (num == prevNum) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
        prevNum = num;
    }

    maxLength = max(maxLength, currentLength);
    return maxLength;
}

int main() {
    cout << "Sum of even numbers: " << sumEvenNumbers() << endl;
    cout << "Length of longest consecutive subsequence of the same number: " << longestConsecutiveSubsequence() << endl;
    return 0;
}
