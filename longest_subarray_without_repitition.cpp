#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
	string s; cin >> s;
	map <char, int> m ;
	for (int i = 0; i < s.size(); ++i)
	{
		m[s[i]]++;
	}
	map<char, int>::iterator it = m.begin();

	while (it != m.end()) {

		cout << "key: " << it->first << " frequency: " << it->second << endl;
		it++;

	}
}