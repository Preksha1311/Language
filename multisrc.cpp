#include<bits/stdc++.h>
using namespace std;

void multisrc(vector<vector<int>> monsterematrix,int n,int m){
    int noofmonster;cin>>noofmonster;
    
    // for(int i=0;i<noofmonster;i++){
    //     pair<int,int> monster;
    // cin>>monster.first>>monster.second;
    //     }
 //   vector<vector<int> > monsterMtx(n+1,vector<int>(m+1,0));
   pair<int,int> mylocation;
   cin>>mylocation.first>>mylocation.second;

   vector<pair<int,int>> curr,nxt;
//  vector<int> current, nxt;
    vector<int> visited(n+1, 0);
    vector<int>distance;
    for(auto itr : rottenNodes){
        current.push_back(itr);
        visited[itr]=1;
        distance.push_back(itr);
    }

    int kitniIterationsHui = 0;
    while(current.size()){
        kitniIterationsHui++;
        for(auto itr : current){
            for(auto ngb : adj[itr]){
                if(!visited[ngb]){
                    nxt.push_back(ngb);
                    visited[ngb]=1;
                    distance[ngb]=distance[ngb] +1;
                }
            }
        }
        swap(current, nxt);
        nxt.clear();
    }

}

int main(){

    freopen("input.txt", "r" ,stdin);
    freopen("output.txt", "w" ,stdout);
//adj map
    int n, m; cin>>n>>m;
    map<int, vector<int>> adj;
    for(int i=0;i<m;i++){
        int x, y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }


 int noofmonster;cin>>noofmonster;
     vector<vector<int> > monsterMtx(n+1,vector<int>(m+1,0));
    for(int i=0;i<noofmonster;i++){
        pair<int,int> monster;
    cin>>monster.first>>monster.second;
        
        }

int n,m;cin>>n>>m;
    vector<int> current, nxt;
    vector<int> visited(n+1, 0);
    vector<int>distance;
    for(auto itr : rottenNodes){
        current.push_back(itr);
        visited[itr]=1;
        distance.push_back(itr);
    }

    int kitniIterationsHui = 0;
    while(current.size()){
        kitniIterationsHui++;
        for(auto itr : current){
            for(auto ngb : adj[itr]){
                if(!visited[ngb]){
                    nxt.push_back(ngb);
                    visited[ngb]=1;
                    distance[ngb]=distance[ngb] +1;
                }
            }
        }
        swap(current, nxt);
        nxt.clear();
    }

    cout<<kitniIterationsHui-1<<endl;
}