#include<iostream>
#include<vector>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;
	int MAX = 0, MIN = 10000;
	int fst;

	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if (i == 0) fst = temp;

		MAX = max (temp, MAX);
		MIN = min (temp, MIN);
	}

	if (fst == MAX && MAX != MIN) cout << 0 << '\n';
	else cout << MAX - fst + 1 << '\n';
	
	return 0;
}
