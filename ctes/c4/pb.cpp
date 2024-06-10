#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

map <char, string> m;

void init(){
	m['Q'] = "QQQWQA";
	m['W'] = "QWWEAS";
	m['E'] = "WEERSD";
	m['R'] = "ERRTDF";
	m['T'] = "RTTYFG";
	m['Y'] = "TYYUGH";
	m['U'] = "YUUIHJ";
	m['I'] = "UIIOJK";
	m['O'] = "IOOPKL";
	m['P'] = "OPPPLP";
	m['A'] = "AQWSAZ";
	m['S'] = "AWEDZX";
	m['D'] = "SERFXC";
	m['F'] = "DRTGCV";
	m['G'] = "FTYHVB";
	m['H'] = "GYUJBN";
	m['J'] = "HUIKNM";
	m['K'] = "JIOLMK";
	m['L'] = "KOPLLL";
	m['Z'] = "ZASXZZ";
	m['X'] = "ZSDCXX";
	m['C'] = "XDFVCC";
	m['V'] = "CFGBVV";
	m['B'] = "VGHNBB";
	m['N'] = "BHJMNN";
	m['M'] = "NJKMMM";

	return;
}

int main(){
	weakson;

	init();

	int q;
	char c;
	cin >> q >> c;

	while (q--){
		int op; cin >> op;
		if (op == 2){
			cout << c;
		}
		else{
			int tp; cin >> tp;
			c = m[c][tp - 1];
		}
	}

	cout << '\n';
	
	return 0;
}
