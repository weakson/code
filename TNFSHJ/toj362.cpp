#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<int> s(18), h(18), d(18), c(18);
bool ans;

void solve(int sp, int hp, int dp, int cp){

	if (ans or (sp == 13 and hp == 13 and dp == 13 and cp == 13)){
		ans = true;
		return;
	}
	if (sp <= 12){
		if (hp <= 12 && s[sp] == h[hp]) solve (sp + 1, hp + 1, dp, cp);
		if (dp <= 12 && s[sp] == d[dp]) solve (sp + 1, hp, dp + 1, cp);
		if (cp <= 12 && s[sp] == c[cp]) solve (sp + 1, hp, dp, cp + 1);
	}
	if (hp <= 12){
		if (dp <= 12 && h[hp] == d[dp]) solve (sp, hp + 1, dp + 1, cp);
		if (cp <= 12 && h[hp] == c[cp]) solve (sp, hp + 1, dp, cp + 1);
	}
	if (dp <= 12){
		if (cp <= 12 &&d[dp] == c[cp]) solve (sp, hp, dp + 1, cp + 1);
	}
	return;
}

int main(){
	weakson;

	for (int i = 0; i < 13; i++) cin >> s[i];
	for (int i = 0; i < 13; i++) cin >> h[i];
	for (int i = 0; i < 13; i++) cin >> d[i];
	for (int i = 0; i < 13; i++) cin >> c[i];

	solve (0, 0, 0, 0);

	if (ans) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}
