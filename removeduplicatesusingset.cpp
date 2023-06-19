#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    vector<int> arr={2,2,3,3,3,3,5,6,7,8,8,8,8,8,8,9};
    for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
    }
    cout<<s.size();
}