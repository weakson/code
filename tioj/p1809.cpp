#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

map<int, set<int> > m;

int main(){
	weakson;

	int n, m, q;
	cin >> n >> m >> q;

	for (int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		m[a].insert(b);
		m[b].insert(a);
	}

	while (q--){
		int x, y;
		cin >> x >> y;
		if (m[x].find(b) != m[x].end()) cout << "yes\n";
		else cout << "no\n";
	}

	return 0;
}
