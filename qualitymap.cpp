#include <iostream>
#include <string>
#include <list>
 
using namespace std;
 
string mp[50];
int n,m;
bool found[50][50];
int num[50][50];
 
bool has_forest[5000];
bool has_mineral[5000];
 
void init()
{
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++) {
      num[i][j] = -1;
      found[i][j] = false;
    }
 
  for(int i=0; i<n*m; i++) {
    has_forest[i] = false;
    has_mineral[i] = false;
  }
}
 
void read_input()
{
  cin >> n >> m;
  for(int i=0; i<n; i++)
    cin >> mp[i];
}
 
int DIR[4][2] =
  {{-1,0},
   {1,0},
   {0,-1},
   {0,1}};
 
void bfs(int sr, int sc, int cnum)
{
  list<pair<int,int>> Q;
 
  Q.push_back(make_pair(sr,sc));
  found[sr][sc] = true;
 
  while(!Q.empty()) {
    pair<int,int> current = Q.front();
    Q.pop_front();
 
    int r = current.first;
    int c = current.second;
 
    num[r][c] = cnum;
   
    // iterate over (r,c)'s neighbors
    for(int d = 0; d < 4; d++) {
      int nr = r + DIR[d][0];
      int nc = c + DIR[d][1];
      if((nr >= 0) && (nr < n) &&
         (nc >= 0) && (nc < m) &&
         (mp[nr][nc] != '#') &&
         (!found[nr][nc])) {
        Q.push_back(make_pair(nr,nc));
        found[nr][nc] = true;
      }
    }
  }
}
 
main()
{
  int ccount = 0;
 
  read_input();
  init();
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++) {
      if((mp[i][j] != '#') &&
         (!found[i][j])) {
 
        bfs(i,j,ccount);
 
        ccount++;
      }
    }
 
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++)
      cout << num[i][j] << " ";
    cout << endl;
  }
}
RAW Paste Data
#include <iostream>
#include <string>
#include <list>

using namespace std;

string mp[50];
int n,m;
bool found[50][50];
int num[50][50];

bool has_forest[5000];
bool has_mineral[5000];

void init()
{
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++) {
      num[i][j] = -1;
      found[i][j] = false;
    }

  for(int i=0; i<n*m; i++) {
    has_forest[i] = false;
    has_mineral[i] = false;
  }
}

void read_input()
{
  cin >> n >> m;
  for(int i=0; i<n; i++)
    cin >> mp[i];
}

int DIR[4][2] =
  {{-1,0},
   {1,0},
   {0,-1},
   {0,1}};

void bfs(int sr, int sc, int cnum)
{
  list<pair<int,int>> Q;
  
  Q.push_back(make_pair(sr,sc));
  found[sr][sc] = true;
  
  while(!Q.empty()) {
    pair<int,int> current = Q.front();
    Q.pop_front();

    int r = current.first;
    int c = current.second;

    num[r][c] = cnum;
    
    // iterate over (r,c)'s neighbors
    for(int d = 0; d < 4; d++) {
      int nr = r + DIR[d][0];
      int nc = c + DIR[d][1];
      if((nr >= 0) && (nr < n) &&
         (nc >= 0) && (nc < m) &&
         (mp[nr][nc] != '#') &&
         (!found[nr][nc])) {
        Q.push_back(make_pair(nr,nc));
        found[nr][nc] = true;
      }
    }
  }
}

main()
{
  int ccount = 0;
  
  read_input();
  init();
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++) {
      if((mp[i][j] != '#') &&
         (!found[i][j])) {

        bfs(i,j,ccount);

        ccount++;
      }
    }

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++)
      cout << num[i][j] << " ";
    cout << endl;
  }
}
