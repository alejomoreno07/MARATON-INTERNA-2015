#include <bits/stdc++.h>
using namespace std;

vector<int> v[10100],factorial;
string s,ans;
int t;
int n,m,x,y;
map<int,int> visited;



void clear(){
    for(int i=0;i<10100;i++) v[i].clear();
}

int bfs(int s){
    if(visited[s]!=0) return 0;
    queue<int> q; q.push(s);
    while(q.size()){
        int u=q.front(); q.pop();
        for(int i=0;i<v[u].size();i++){
            int to=v[u][i];
            if(visited[to]==0){
                q.push(to);
                visited[to]++;
            }
        }
    }
    return 1;
}

void solver(){
    long long int ans=0;
    for(int i=1;i<=n;i++){
        int tempo=bfs(i);
        //cout<<tempo<<" "<<i<<endl;
        ans+=tempo;
    }
    cout<<(ans)*(ans-1)/2<<endl;
    
}


void start(){
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m; clear(); visited.clear();
        for(int j=0;j<m;j++){
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        solver();
    }
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    start();
    return 0;
}