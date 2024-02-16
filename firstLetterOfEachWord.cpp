#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string str = "simply easy learning";
    cout<<" Your string is: "<<str<<endl;
    cout<<" The first letter of each word is: ";
    istringstream iss(str);
    string word;

    while (iss >> word){
        cout<<word[0]<<" ";
    }
    return 0;
}