#include<iostream>
#include "testlib.h"
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(int argc, char* argv[]){
	weakson;

	registerGen (argc, argv, 1);

	const int N = rnd.next (3, 100000);
	cout << N << '\n';

	int n = N;

	for (int i = 0; i < n; i++){
		cout << rnd.next (1, 1000);
		if (i != n - 1) cout << ' ';
	}
	cout << '\n';
}
