#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;
	
	vector <int> v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}

	vector<int> ans;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (v[i] < v[j]){
				ans.emplace_back (i + 1);
				break;
			}
		}
	}

	int len = ans.size();
	cout << len << '\n';
	for (int i = 0; i < len; i++) cout << ans[i] << " \n"[i == len - 1];

	return 0;
}
