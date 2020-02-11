#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int n, m;

    while(cin >> n >> m, n != 0 and m != 0) {
        int indegree[n+1];
        vector<int> adjlist[n+1];

        memset(indegree, 0, sizeof(indegree));

        int u, v;
        while(m--) {
            cin >> u >> v;
            adjlist[u].push_back(v);
            ++indegree[v];
        }

        queue<int> q;
        vector<int> ordering;

        for(int i = 1; i <= n; ++i) {
            if(indegree[i] == 0) q.push(i);
        }

        while(!q.empty()) {
            u = q.front(); 
            q.pop();
            ordering.push_back(u);

            for(unsigned i = 0; i < adjlist[u].size(); ++i) {
                v = adjlist[u][i];
                --indegree[v];
                if(indegree[v] == 0) 
                {q.push(v);}
            }
        }

        for(int i = 0; i < n; ++i) {
            if(i) {cout << ' ';}
            cout << ordering[i];
        }
        cout << '\n';
    }

    return 0;
}