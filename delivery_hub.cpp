#include <iostream>
#include <vector>
#include <set>
#include <algorithm> 

using namespace std;
 
#define MAX_N 30000
#define INFINITY 1000000000
 
int n,m,k,s,t,numtest,listk[10],type_want;
vector<int> adj[MAX_N];
vector<int> weight[MAX_N];
vector<int> type[MAX_N];
 
void read_input()
{
  cin >> n >> m >> k;
  for(int i=0; i<n; i++) {
    adj[i].clear();
    weight[i].clear();
  }
  for(int i=0; i<m; i++) {
    int u,v,type1;
    cin >> u >> v >> type1 ;
   
    adj[u].push_back(v);
    weight[u].push_back(1);
    type[u].push_back(type1);

    adj[v].push_back(u);
    weight[v].push_back(1);
    type[v].push_back(type1);

    
  }
  for(int i=0;i < k ;i++){
    cin >> listk[i];
  }
  cin >> t >> type_want ;

}
 
int d[MAX_N];
bool scanned[MAX_N];
set<pair<int,int> > Q;

int shortest_path(int s, int t)
{
  Q.clear();
  for(int i=0; i<n; i++) {
    d[i] = INFINITY;
    scanned[i] = false;
    Q.insert(make_pair(d[i],i));
  }
  d[s] = 0;
  Q.insert(make_pair(0,s));
  
  while(true) {
    int mind = INFINITY + 1;
    int u = -1;
    /*
    for(int v=0; v<n; v++)
      if((!scanned[v]) && (d[v] < mind)) {
        u = v;
        mind = d[v];
      }
    */

    pair<int,int> smallest = *(Q.begin());
    Q.erase(Q.begin());

    u = smallest.second;
    mind = d[u];
    if(scanned[u])
      continue;
    
    if(mind >= INFINITY) {
      break;
    }
 
    if(u==t) {
      return d[u];
    }
    scanned[u] = true;
    for(int i=0; i<adj[u].size(); i++) {
      int v = adj[u][i];
      int w = weight[u][i];
      int ts = type[u][i];
 
      if(d[u] + w < d[v] and ts == type_want) {
        d[v] = d[u] + w;
        Q.insert(make_pair(d[v],v));
      }
    }
  }
  return -1;
}
 
int main()
{ 
  int total = 100000;
  read_input();
  for(int i=0; i<k; i++) {
    if(total > shortest_path(listk[i],t) and shortest_path(listk[i],t) >= 1){
      total = shortest_path(listk[i],t);
    }    
  }
  if(total == 100000){
    total = -1;
  }
  cout << total;
}