#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> arr, int n){
int s=0;
int e= n;
while(s<=e){
    swap(arr[e],arr[s]);
s++;
e--;
}
}

int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(77);
    v.push_back(97);
    v.push_back(57);
    v.push_back(107);
    reverseArray(v,v.size());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}