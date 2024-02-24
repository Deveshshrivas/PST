#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        // Print numbers increasing from 1 to i
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print spaces
        for(int j = 1; j <= 2*(n - i); j++) {
            cout << "  ";
        }

        // Print numbers decreasing from i to 1
        for(int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}