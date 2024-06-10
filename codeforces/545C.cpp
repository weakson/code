#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

vector <pair<ll, ll> > v[2];

bool cmp (pair<ll, ll> a, pair<ll, ll> b){
	return a.S < b.S;
}

int main(){
	weakson;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++){
		int x, h;
		cin >> x >> h;
		v[0].emplace_back(make_pair(x - h, x));
		v[1].emplace_back(make_pair(x, x + h));
	}

	vector<ll> dp (n); // 前i棵能被砍下來的最大數量
}
