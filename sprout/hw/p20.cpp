#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<ll> arr(1000000);

int main(){
    weakson;
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++){
        cout << "Line #" << i << '\n';
        ll g;
        cin >> g;
        for (ll j = 1; j <= g; j++){
            ll n;
            cin >> n;
            for (ll k = 0; k < n; k++){
                ll temp;
                cin >> temp;
                arr[temp] = j;
            }
        }
        //for (ll i : arr) cout << i << ' ';
		ll m;
		cin >> m;
		deque<ll> d;
		stack<ll> temp;
		for (ll j = 0; j < m; j++){
			string op;
			cin >> op;
			if (op == "ENQUEUE"){
				ll ind;
				cin >> ind;
				if (d.empty()){
					d.push_back(ind);
				}
				else{
					bool is_in = false;
					while (!d.empty()){
						if (arr[d.back()] == arr[ind]){
							d.push_back(ind);
							is_in = true;
							break;
						}
						temp.push(d.back());
						d.pop_back();
					}
					while (!temp.empty()){
						d.push_back(temp.top());
						temp.pop();
					}
					if (!is_in) d.push_back(ind);
				}
			}
			else{
				cout << d.front() << '\n';
				d.pop_front();
			}
		}
    }
    return 0;
}
