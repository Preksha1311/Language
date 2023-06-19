#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
//matrix blocked
	int n, m; cin >> n >> m;
	vector<vector<int>> mat(n + 1, vector<int>(m + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			//cin>>mat[i][j];
			mat[i][j] = 1;
		}
	}
//bfs from 1,1 to n,m
	while (lo <= hi) {
		pair<int, int> q; cin >> q;

//unblock

// for(int =0;i<mid;i++){
// 	visited[i]
// }



		vector<vector<int>> visited(n + 1, vector<int>(m + 1, 0));
		vector<pair<int, int>> curr, nxt;
		curr.push_back({1, 1});
		visited[1][1] = 1;

		while (curr.size()) {
			for (auto itr : curr) {
				int x = itr.first;
				int y = itr.second;

				if (x + 1 <= n and !visited[x + 1][y] and mat[x + 1][y] == 0) {
					nxt.push_back({x + 1, y});
					visited[x + 1][y] = 1;
				}

				if (y + 1 <= m and !visited[x][y + 1] and mat[x][y + 1] == 0) {
					nxt.push_back({x, y + 1});
					visited[x][y + 1] = 1;
				}
				if (x - 1 <= 1 and !visited[x - 1][y] and mat[x - 1][y] == 0) {
					nxt.push_back({x - 1, y});
					visited[x - 1][y] = 1;
				}
				if (y - 1 <= 1 and !visited[x][y - 1] and mat[x][y - 1] == 0) {
					nxt.push_back({x, y - 1});
					visited[x][y - 1] = 1;
				}

			}
			swap(curr, nxt);
			nxt.clear();
		}


		if (visited[n][m]) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
}
}