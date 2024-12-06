#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool pr = true;
    if (n <= 1) pr = false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            pr = false;
            break;
        }
    }
    if (pr) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }
    return 0;
}
