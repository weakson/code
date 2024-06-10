#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	int n;
	cin >> n;
	priority_queue<ll, vector<ll>, greater<ll> > pq;
	vector<ll> v(n);
	ll blood = 0;
	ll bottle = 0;
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	for (int i = 0; i < n; i++){
		blood += v[i];
		bottle++;
		if (v[i] < 0){
			pq.push(v[i]);
		}
		if (blood < 0){
			while (blood < 0){
				blood -= pq.top();
				pq.pop();
				bottle--;
			}
		}
	}
	cout << bottle << '\n';
	return 0;
}
