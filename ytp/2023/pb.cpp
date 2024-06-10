#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

struct node{
	ll a, c;
	double cp;
};

bool cmp (node x, node y){
	return x.cp > y.cp;
}

int main(){
	weakson;

	int n, w;
	cin >> n >> w;

	vector<node> v (n);

	ll sum = 0;
	for (int i = 0; i < n; i++){
		int a, b, c;
		cin >> a >> b >> c;
		v[i].a = a;
		v[i].c = c;
		v[i].cp = (double)a / (double)c;
		sum += b;
	}

	sort (v.begin(), v.end(), cmp);
	for (node i : v) cout << i.cp << ' ';
	cout << '\n';
	
	for (int i = 0; i < n; i++){
		int lv = w / v[i].c + 1;
		w %= v[i].c;
	    sum += v[i].a * lv;
	}
	cout << sum << '\n';
	
	return 0;

}
