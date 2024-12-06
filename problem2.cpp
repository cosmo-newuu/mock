#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumEvenNumbers() {
  int sum = 0, num;
  while (cin >> num && num != -1) {
    if (num % 2 == 0) sum += num;
  }
  return sum;
}

int longestConsecutiveSubsequence() {
  int num, prevnum, currentLength = 1, maxLength = 0;
  cin >> prevnum;
  if (prevnum == -1) return 0;
  while (cin >> num && num != -1) {
    if (num == prevnum) {
      currentLength++;
    } else {
      maxLength = max(maxLength, currentLength);
      currentLength = 1;
    }
    prevnum = num;
  }
  maxLength = max(maxLength, currentLength);
  return maxLength;
}

int main() {
  cout << "Sum of even numbers: " << sumEvenNumbers() << endl;
  cout << "Length of longest consecutive subsequence: " << longestConsecutiveSubsequence() << endl;
  return 0;
}
