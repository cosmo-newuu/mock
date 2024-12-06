#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool pr = true;
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            pr = false;
            break;
        }else {
            pr = true;
        }

    }
    if (pr) {
        cout << "Prime" << endl;

    }else {
        cout << "Not Prime" << endl;
    }
}
