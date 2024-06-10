#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int solve (deque<ll> v){
	deque<ll> tmp;
	int len = v.size();
	for (int i = 0; i < len; i += 2){
		tmp.emplace_back (v[i]);
	}
	if (tmp.size() == 1){
		return *tmp.begin();
	}
	else if (len & 1){
		tmp.pop_front();
	}
	return solve (tmp);
}

int main(){
	weakson;

	int n;
	cin >> n;

	deque<ll> s(n);

	for (int i = 1; i <= n; i++){
		s[i - 1] = i;
	}

	cout << solve(s) << '\n';

	return 0;
}
