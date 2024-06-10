#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int n;
int arr[15];
bitset<15> is_in;

void solve(int cnt){
	if (cnt == n){
		string s;
		for (int i = 0; i < n; i++){
			if (arr[i] != 10) s += arr[i] + '0';
			else s += "10";
			s += ' ';
		}
		cout << s << '\n';;
		return;
	}
	for (int i = 1; i <= n; i++){
		if (!is_in[i]){
			arr[cnt] = i;
			is_in[i] = true;
			solve (cnt + 1);
			is_in[i] = false;
		}
	}
	return;
}

int main(){
	weakson;
	cin >> n;
	for (int i = 1; i <= n; i++){
		arr[0] = i;
		is_in[i] = true;
		solve (1);
		is_in[i] = false;
	}
	return 0;
}
