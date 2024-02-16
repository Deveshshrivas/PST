#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string str = "simplyeasylearning";

    cout << "String before sorting - " << str << endl;

    sort(str.begin(), str.end());

    cout << "String after sorting - " << str << endl;

    return 0;
}