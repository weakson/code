#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	multiset<ll, greater<ll> > l;
	multiset<ll> r;
	ll a[200005];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < k; i++){
		if (i == 0) l.insert(a[i]);
		else if (a[i] > *l.begin()) r.insert(a[i]);
		else l.insert(a[i]);
		while (r.size() >= l.size()){
			l.insert(*r.begin());
			r.erase(r.begin());
		}
		while (r.size() < l.size()){
			r.insert(*l.begin());
			l.erase(l.begin());
		}
	}
	// for (ll i : l) cout << i << ' ';
	// for (ll i : r) cout << i << ' ';
	// cout << '\n';
	if (k & 1) cout << *r.begin() << ' ';
	else cout << *l.begin() << ' ';
	for (int i = k; i < n; i++){
		if (l.find(a[i - k]) != l.end()){
			l.erase(l.find(a[i - k]) );
		}
		else{
			r.erase(r.find(a[i - k]) );
		}
		if (a[i] > *l.begin()) r.insert(a[i]);
		else l.insert(a[i]);
		while (r.size() >= l.size()){
			l.insert(*r.begin());
			r.erase(r.begin());
		}
		while (r.size() < l.size()){
			r.insert(*l.begin());
			l.erase(l.begin());
		}
		if (k & 1) cout << *r.begin() << ' ';
		else cout << *l.begin() << ' ';
	}
	cout << '\n';
	return 0;
}
