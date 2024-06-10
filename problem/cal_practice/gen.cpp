#include<iostream>
#include "testlib.h"
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(int argc, char* argv[]){
	weakson;

	registerGen (argc, argv, 1);

	const int Q = rnd.next (1, 100);
	cout << Q << '\n';

	for (int i = 0; i < Q; i++){
		string op = rnd.next ("RS|Rp");
		cout << op;
		if (op == "Rp"){
			int x = rnd.next (0, 9);
			cout << ' ' << x;
		}
		cout << '\n';
	}
}
