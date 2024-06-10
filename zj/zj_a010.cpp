#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;

	int out = 2;
	bool is_begin = true;
	while (n != 1){
		int cnt = 0;
		while (n % out == 0){
			n /= out;
			cnt++;
		}
		if (cnt != 0){
			if (is_begin == false) cout << " * ";
			is_begin = false;
			cout << out;
			if (cnt != 1) cout << '^' << cnt;
		}
		out++;
	}
	return 0;
}

