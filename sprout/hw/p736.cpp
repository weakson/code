#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;

	int n, m;
	cin >> n >> m;

	vector<int> c(n + 1);
	vector<pair<int, int> > v(n + 1);
	
	for (int i = 0; i < n; i++){
		int a, b, w;
		cin >> a >> b >> w;
		if (a != b){
			v[a].emplace_back({b, w});
			v[b].emplace_back({a, w});
		}
	}

}
