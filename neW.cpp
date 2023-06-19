#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	freopen("input.txt", "r" , stdin);
	freopen("error.txt", "w" , stderr);
//	freopen("output.txt", "w" , stdout);
	map<string, int> m;
	m["azy"] = 2;
	m["upo"] = 3;
map<int,string> p;
p[1]= m["yppp"];
	//map<string, int> :: iterator i = m.begin();
	// while (i != m.end()) {
	// 	cout << i->first << i->second << endl;
	// 	i++;
	// }

	for (auto itr : m) {
		cout << itr.first<<"\t"<<itr.second<<endl;
		}
}