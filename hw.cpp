#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	// freopen("input.txt", "r" , stdin);
	// freopen("output.txt", "w" , stdout);
	// string s; cin >> s;
	// map <char, int> m ;
	// for (int i = 0; i < s.size(); ++i)
	// {
	// 	m[s[i]]++;
	// }
	//map<char, int>::iterator it = m.begin();

	// while (it != m.end()) {

	// 	cout << "key: " << it->first << " frequency: " << it->second << endl;
	// 	it++;

	// }

	// m['a']--;
	// cout << m['a'];

// 	ll lo =1 ,hi = min((ll)256,(ll)s.size());
// ll mid  = (lo+hi)/2;

	string M;
	cin >> M;
	map<char, char> m;
	char ch = 'a';
	for (int i = 0; i < 26; i++) {
		m[M[i]] = i;
		ch++;
	}
	map<char, char>::iterator it = m.begin();
	while (it != m.end()) {

		cout << "key: " << it->first << " frequency: " << it->second << endl;
		it++;

	}

	return 0;
}



