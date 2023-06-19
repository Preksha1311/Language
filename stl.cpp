#include <iostream>
// #include <array>
#include <vector>
// #include <queue>
#include <algorithm>

using namespace std;

int main()
{

    /*int arr[3]={5,6,7};
    array<int,4> a = {3,5,6,7};

    //cout<<arr.at(2); //error
    cout<<a.at(2);
    cout<<a.front();*/

    // max heap
   /* 
   priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    mini.push(4);
    mini.push(6);
    mini.push(9);
    mini.push(1);
    mini.push(3);
    mini.push(10);

    cout << "size  : " << mini.size() << endl;

    cout << mini.top() << endl;
    int n = mini.size();
    for (int i = 0; i < n; i++)
    {
        cout << mini.top()<<endl;
        mini.pop();
    }
*/

vector<int> v;

v.push_back(3);
v.push_back(5);
v.push_back(36);
v.push_back(31);
v.push_back(2);
v.push_back(10);
v.push_back(10000);
v.push_back(70);
v.push_back(20);

sort(v.begin(), v.end());
cout<<"sorted vector";
for(int i = 0;i<v.size();i++)
cout<<v[i]<<"\t";
cout<<endl;
cout<<"binary search result in true and false"<<binary_search(v.begin(),v.end(),31)<<endl;

//lower bound mtlb sorted arr me se kisi constant ki first position
//upper bound mtlb kisi constant ki last positon+1

vector<int> :: iterator low,up;
low = lower_bound(v.begin(),v.end(),31)-v.begin();
up = upper_bound(v.begin(),v.end(),31)-v.begin();

cout<<"LB iterator : "<<low<<endl;
cout<<"UB iterator : "<<up<<endl;

    return 0;

}