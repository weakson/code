#include<iostream>
#include "testlib.h"
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(int argc, char* argv[]){
	weakson;

	registerGen (argc, argv, 1);

	const int a = rnd.next (-100000, 100000);
    const int b = rnd.next (-100000, 100000);
    const long long l = rnd.next (-10000000000, 10000000000);
    const long long r = rnd.next (l, 10000000000);
    cout << a << ' ' << b << ' ' << l << ' ' << r << '\n';
}
