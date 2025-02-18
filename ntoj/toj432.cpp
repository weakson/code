#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int n, m;
int arr[1005][1005];
bool visited[1005][1005];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

bool dfs(int x, int y){
	if (arr[x][y] == 1) return true;
	for (int i = 0; i < 4; i++){
		int rx = x + dx[i];
		int ry = y + dy[i];

		if (rx <= n && rx >= 1){
			if (ry <= m && ry >= 1){
				if (!visited[rx][ry]){
					visited[rx][ry] = true;
					if (dfs (rx, ry)){
						return true;
					}
				}
			}
		}
	}
	return false;
}

int main(){
	weakson;
	cin >> n >> m;
	
	int x, y;
	cin >> x >> y;
	arr[x][y] = 1;

	int u, v;
	cin >> u >> v;

	int f;
	cin >> f;
	for (int i = 0; i < f; i++){
		cin >> x >> y;
		visited[x][y] = 1;
	}

	if (dfs(u, v)) cout << "Cool!\n";
	else cout << "Harakiri!\n";

	return 0;
}
