#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int countUniqueCharacters(string s) {
    unordered_set<char> seen;
    for (char c : s) {
        if (c != ' '&& seen.find(c) == seen.end())
            seen.insert(c);
            cout<<c<<endl;
    }
    return seen.size();
}

int main() {
    using namespace std;
    string s = "Hello, World!";
    int count = countUniqueCharacters(s);
    cout << "\nThe number of unique characters is: " << count << endl;
    return 0;
}