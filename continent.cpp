#include <cstring>
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;


int n, m;
int visit[22][22];
char grid[22][22];
char a;
int current;

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

bool valid(int x) { return x >= 0 && x < n; }

int fix(int y) {
	if (y < 0) return m - 1;
	if (y >= m) return 0;
	return y;}

void flood(int x, int y) {
	visit[x][y] = 1;
	current++;
	for (int k = 0; k < 4; k++) {
		int to_x = dx[k] + x;
		int to_y = fix(dy[k] + y);
		if (valid(to_x) && !visit[to_x][to_y] && grid[to_x][to_y] == a)
			flood(to_x, to_y);
	}}
int main() {
	
	while (cin >> n >> m) {
		memset(visit, 0, sizeof visit);

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> grid[i][j];

		int x, y;
		cin >> x >> y;
		a = grid[x][y];
		flood(x, y);

		int res = 0;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (!visit[i][j] && grid[i][j] == a) {
					current = 0;
					flood(i, j);
					res = max(res, current);
				}

		cout << res << "\n";

	}
	return 0;
}