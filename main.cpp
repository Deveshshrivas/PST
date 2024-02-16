#include <iostream>
#include <string>

std::string replaceSubstring(std::string S, std::string S1, std::string S2) {
    size_t pos = S.find(S1);
    while (pos != std::string::npos) {
        S.replace(pos, S1.length(), S2);
        pos = S.find(S1, pos + S2.length());
    }
    return S;
}

int main() {
    using namespace std;
    string S = "abababa", S1 = "aba", S2 = "a";
    string result = replaceSubstring(S, S1, S2);
    cout << result << endl;
    return 0;
}