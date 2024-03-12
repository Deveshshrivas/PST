#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    //  create vector, declare
    // vector<int>v;
    // vector<int>v1(4,1);
    // vector<int>v2 = {1,2,3,4,5};
    // cout<<"Size of v:"<<v.size()<<endl;
    // cout<<"Capacity of v:"<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(7);
    // cout<<"Size of v:"<<v.size()<<endl;
    // cout<<"Capacity of v:"<<v.capacity()<<endl;
    // v[1]=5;
    // cout<<"Size of v1:"<<v1.size()<<endl;
    // cout<<"Capacity of v1:"<<v1.capacity()<<endl;
    // v1.push_back(3);
    // cout<<"Size of v2: "<<v2.size()<<endl;
    // cout<<"Capacity of v2: "<<v2.capacity()<<endl;

    // Deleting value from vector
    // vector<int> vnew;
    // vnew.push_back(4);
    // vnew.push_back(2);
    // vnew.push_back(5);
    // vnew.push_back(8);
    // vnew.push_back(7);
    // vnew.pop_back();

    // cout << "Size of vnew: " << vnew.size() << endl;
    // cout << "Capacity of vnew: " << vnew.capacity() << endl;

    // vnew.erase(vnew.begin() + 1);
    // cout << "Size of vnew: " << vnew.size() << endl;
    // cout << "Capacity of vnew: " << vnew.capacity() << endl;

    // for (int i = 0; i < vnew.size(); i++)
    //     cout << vnew[i] << " \n";
    // vnew.insert(vnew.begin() + 1, 40);
    // cout << endl;
    // for (int i = 0; i < vnew.size(); i++)
    //     cout << vnew[i] << " \n";

    // vnew.clear();
    // cout << "Size of vnew: " << vnew.size() << endl;
    // cout << "Capacity of vnew: " << vnew.capacity() << endl;


    // vector<int>arr;
    // arr.push_back(2);
    // arr.push_back(12);
    // arr.push_back(4);
    // arr.push_back(122);
    // cout<<arr[0]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr[arr.size()-1]<<endl;
    // cout<<arr.back()<<endl;

    // vector<int>a;
    // a = arr;

    // cout<<a.size();
    // cout<<endl;

    // for(auto it = arr.begin(); it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }
    // for(auto i: arr)
    // cout<<i<<" ";

    vector<int>ans;
    ans.push_back(5);
    ans.push_back(233);
    ans.push_back(15);
    ans.push_back(20);


    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;

