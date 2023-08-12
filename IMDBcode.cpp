#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
        freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    while(t--){
        map<int,int> m;w
        int movie;cin>>movie;
        int space;cin>>space;
        for(int i=0;i<movie;i++){
              int rating;int req;
            cin>>rating>>req;
        //    cout<<rating<<req;
           m[rating] =req;
        }
        map<int,int> :: iterator itr  = m.end();
       while(itr!=   m.begin()){
           if(itr->second<=space)
           cout<<itr->first;
           itr--;
       }
    }
	return 0;
}
