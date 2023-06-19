#include<bits/stdc++.h>
using namespace std;
// master lib

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
//vector<int> a;
int x; cin>>x;
vector<int> arr(x,0);
for(int i=0;i<x;i++){
cin>>arr[i];
cout<<arr[i]<<" ";
} 

// a.push_back(2);
// cout<<a[0];
// a.push_back(5);
// cout<<a[1];
// a.pop_back();
// cout<<a[1];

map<int , int> m;
for(int i=0;i<5;i++){
    int id,marks;
    cin>>id>>marks;
    m[id]= marks;
}

map <int,int> :: iterator it = m.begin();
 while (it != m.end())
  {
    cout << "Key: " << it->first << ", Value: " << it->second << endl;
    ++it;
  }
}
