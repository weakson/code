#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

ll arr[200005], prefix[200005];
int n, x;

int bin_search(int lp){
	int l = lp, r = n + 1;
	while (l + 1 <= r){
		int mid = (l + r) / 2;
		ll sum = prefix[mid] - prefix[lp];
		if (sum == x){
			return 1;
		}
		else if (sum > x){
			r = mid;
		}
		else{
			l = mid + 1;
		}
	}
	return 0;
}

int main(){
	weakson;
	cin >> n >> x;
	prefix[0] = 0;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		prefix[i + 1] = prefix[i] + arr[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++){
		ans += bin_search (i);
	}
	cout << ans << '\n';
	return 0;
}
