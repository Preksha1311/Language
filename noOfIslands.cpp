#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);

	int n, m; cin >> n >> m;
	map<int, vector<int>> adj;
	for (int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	vector<int> visited(n + 1, 0);
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (visited[i] == false) {
			cnt++;

			vector<int> curr, nxt;
			curr.push_back(i);
			visited[i] = true;
			while (curr.size()) {
				for (auto itr : curr) {
					for (auto ngb : adj[itr]) {
						if (!visited[ngb]) {
							nxt.push_back(ngb);
							visited[ngb] = 1;
						}
					}
				}
				swap(curr, nxt);
				nxt.clear();
			}
		}
	}

	cout << cnt << endl;
}