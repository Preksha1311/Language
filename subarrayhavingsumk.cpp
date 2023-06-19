#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
	int t; cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		vector<ll> arr(n);
		for (ll i = 0; i < n; i++)cin >> arr[i];

		sort(arr.begin(), arr.end());
		//for (ll i = 0; i < n; i++)cout << arr[i] << " ";
		ll sum1 = 0, sum2 = 0;
		for (ll i = 2; i < n; i++) {
			sum1 += arr[i];
		}
		for (ll i = 0; i < n - 1; i++) {
			sum2 += arr[i];
		}

		if (m == 2) {
			sum1 = sum1 - arr[arr.size()];
			cout << sum1 << endl;
		}

		// if (sum2 > sum1) {
		// 	cout << sum2 << endl;
		// }
		// else
		else cout << sum1 << endl;

		// int sum = 0;
		// if (m == 1) {
		// 	for (ll i = 2; i < n; i++) {
		// 		sum += arr[i];
		// 	}
		// }
		// else {
		// 	for (ll i = 0; i < n - 1 ; i++) {

		// 		sum += arr[i];
		// 	}
		// }
		// cout << sum;



		for (ll i = 0; i < n; i++) {

			if

		}


}
}