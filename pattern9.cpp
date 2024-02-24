#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<2*i+1; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-1; i>0; i--){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}