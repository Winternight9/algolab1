#include <iostream>
#include <vector>
 
using namespace std;
 
#define MAX_N 30000
#define INFINITY 1000000000
 
int n,m,s,t,numtest;
vector<int> adj[MAX_N];
vector<int> weight[MAX_N];
 
void read_input()
{
  cin >> n >> m >> s >> t;
  for(int i=0; i<n; i++) {
    adj[i].clear();
    weight[i].clear();
  }
  for(int i=0; i<m; i++) {
    int u,v,w;
    cin >> u >> v >> w;
   
    adj[u].push_back(v);
    weight[u].push_back(w);
 
    adj[v].push_back(u);
    weight[v].push_back(w);
  }
}
 
int d[MAX_N];
bool scanned[MAX_N];
 
void shortest_path(int s, int t)
{
  for(int i=0; i<n; i++) {
    d[i] = INFINITY;
    scanned[i] = false;
  }
  d[s] = 0;
  while(true) {
    int mind = INFINITY + 1;
    int u = -1;
    for(int v=0; v<n; v++)
      if((!scanned[v]) && (d[v] < mind)) {
        u = v;
        mind = d[v];
      }
    if(mind >= INFINITY) {
      break;
    }
 
    if(u==t) {
      cout << d[u] << endl;
      return;
    }
    scanned[u] = true;
    for(int i=0; i<adj[u].size(); i++) {
      int v = adj[u][i];
      int w = weight[u][i];
 
      if(d[u] + w < d[v]) {
        d[v] = d[u] + w;
      }
    }
  }
  cout << "unreachable\n";
}
 
main()
{
  cin >> numtest;
  for(int i=0; i<numtest; i++) {
    read_input();
    cout << "Case #" << (i+1) << ": ";
    shortest_path(s,t);
  }
}