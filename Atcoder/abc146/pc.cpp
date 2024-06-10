#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	long long a, b, x;
	cin >> a >> b >> x;
	int l = 1, r = 1000000000, prev_mid = 0;
	long long prev_cost = 1e10;

	while (l <= r){
		long long mid = (l + r) / 2;
		long long d = log10(mid) + 1;
		long long cost = a * mid + b * d;

		if (l == r){
			if (cost > x and prev_cost > x){
				cout << 0 << '\n';
			}
			else if (cost > x){
				cout << prev_mid << '\n';
			}
			else{
				cout << mid << '\n';
			}
			break;
		}

		if (cost == x){
			cout << mid << '\n';
			break;
		}
		else if (cost < x){
			prev_mid = mid;
			prev_cost = cost;
			l = min(1000000000LL, mid + 1);
		}
		else{
			r = max(1LL, mid - 1);
		}
	}
	return 0;
}
