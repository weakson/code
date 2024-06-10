#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

void solve (vector<ll> v){
	for (int i = 1; i < v.size(); i += 2){
		cout << v[i] << ' ';
	}

	vector<ll> tmp;
	int i;
	if (v.size() & 1){
		cout << v[0] << ' ';
		i = 2;
	}
	else{
		i = 0;
	}

	for (; i < v.size(); i += 2){
		tmp.emplace_back (v[i]);
	}

	if (tmp.size() != 1) solve (tmp);
	else cout << *tmp.begin() << ' ';

	return;
}

int main(){
	weakson;

	int n;
	cin >> n;

	if (n == 1){
		cout << 1 << '\n';
		return 0;
	}

	vector<ll> v;
	for (int i = 1; i <= n; i++) v.emplace_back(i);

	solve (v);

	cout << '\n';

	return 0;
}
