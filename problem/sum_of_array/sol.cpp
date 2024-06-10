#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int a[100005], b[100005];

int main(){
	weakson;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}

	for (int i = 0; i < n; i++){
		cout << a[i] + b[i] << ' ';
	}
	cout << '\n';

	return 0;
}
