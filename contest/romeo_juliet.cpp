#include<bits/stdc++.h>
using namespace std;
const int N=1e5+3;
vector<int>adj[N];
bool visited[N];
int level[N];
void bfs(int s){
queue<int>q;
q.push(s);
visited[s]=true;
level[s]=0;
while(!q.empty()){
    int u=q.front();
    q.pop();
    //section 1:A node is being processed
   // cout<<"visiting node: "<<u<<endl;
    for(int v:adj[u]){
        //section 2:child processing
        if(visited[v]==true) continue;
        q.push(v);
        visited[v]=true;
        //section 3: child processing
        level[v]=level[u]+1;
    }
    //section 4: same as section 1
}
}
int main(){
int n,m;
cin>>n>>m;

for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
      adj[v].push_back(u);
}
int x,y;
float k;
cin>>x>>y>>k;
if(n<=m){
bfs(x);


float r=(level[y]/2.0);
//cout<<r;
if(r<=k)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
else
    cout<<"NO"<<endl;
return 0;
}
