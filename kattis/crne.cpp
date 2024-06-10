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

	ll n;
	cin >> n;

	cout << (n / 2 + 1) * (n / 2 + n % 2 + 1) << '\n';
}
