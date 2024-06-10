#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	int n;
	priority_queue<int> l;
	priority_queue<int, vector<int>, greater<int> > r;
	while (cin >> n){
		if (n == 0) break;
		if (l.empty()) l.push(n);
		else if (n <= l.top()) l.push(n);
		else r.push(n);
		while (r.size() < l.size()){
			r.push(l.top());
			l.pop();
		}
		while (r.size() > l.size()){
			l.push(r.top());
			r.pop();
		}
		int len = l.size() + r.size();
		if (len & 1){
			cout << l.top() << '\n';
		}
		else{
			cout << (l.top() + r.top()) / 2 << '\n';
		}
	}
	return 0;
}
