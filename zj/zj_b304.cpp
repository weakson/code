#include<bits/stdc++.h>
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

	for (int i = 0; i < n; i++){
		string s;
		cin >> s;
		stack<char> stk;

		int len = s.size();
		for (int j = 0; j < len; j++){
			if (stk.empty()) stk.push(s[j]);
			else if (s[j] == ')'){
				if (stk.top() == '(') stk.pop();
			}
			else if (s[j] == ']'){
				if (stk.top() == '[') stk.pop();
			}
			else stk.push(s[j]);
		}
		if (stk.empty()) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
