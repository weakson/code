#include<iostream>
#include "testlib.h"
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(int argc, char* argv[]){
	weakson;

	registerGen (argc, argv, 1);

	const int Q = 100;
	cout << Q << '\n';

	for (int i = 0; i < Q; i++){
		string op = "LS";
		cout << op << '\n';
	}
}
