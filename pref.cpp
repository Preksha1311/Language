#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
	;
	ll x; cin >> x;

	vector<ll> arr (x + 1, 0);

	for (ll i = 1; i <= x; i++) {
		cin >> arr[i];
	}
	for (ll i = 1; i <= x; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << "pref array";

	vector<ll> pref(x + 1, 0);
	for (ll i = 1; i <= x; i++) {
		pref[i] = pref[i - 1] + arr[i];
		cout << pref[i] << " " ;
	}
	cout << endl;
	ll k;
	cin >> k ;
	ll sum = 0;
	for (ll i = 1; i <= x; i++) {
		if (arr[i - 1] + arr[i] + arr[i + 1] == k) {

			cout << arr[i - 1] << " " << arr[i] << " " << arr[i + 1];
		}
	}
}