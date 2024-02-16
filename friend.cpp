#include <iostream>
using namespace std;

class MyClass;


void showValue(MyClass obj);
class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    friend void showValue(MyClass obj);
};


void showValue(MyClass obj) {
    cout << "The value of MyClass is: " << obj.value << endl;
}

int main() {
    MyClass obj(5);
    showValue(obj);

    return 0;
}
