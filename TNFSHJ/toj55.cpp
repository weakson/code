#include<iostream>
#include<algorithm>
using namespace std;

long long arr[1000005];
int n;

int up_bound(long long tar){ // first > tar
	int l = 0, r = n, ind;
	while (l <= r){
		int mid = (l + r) / 2;
		if (l == r){
			ind = mid;
			break;
		}
		if (tar >= arr[mid]){
			l = mid + 1;
		}
		else{
			r = mid;
		}
	}
	return ind;
}

int lw_bound(long long tar){ // first >= tar
	int l = 0, r = n, ind;
	while (l <= r){
		int mid = (l + r) / 2;
		if (l == r){
			ind = mid;
			break;
		}
		if (tar > arr[mid]){
			l = mid + 1;
		}
		else{
			r = mid;
		}
	}
	return ind;
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	arr[n] = 1000000000;
	sort (arr, arr + n);
	int q;
	cin >> q;
	for (int i = 0; i < q; i++){
		long long temp;
		cin >> temp;
		int tail = up_bound(temp);
		int head = lw_bound(temp);
		cout << tail - head << '\n';
	}
	return 0;
}
