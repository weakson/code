#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

string s;
vector<map<string, ll> > v(1);

bool is_upper (char a){
    return (a >= 'A' && a <= 'Z');
}

bool is_lower (char a){
    return (a >= 'a' && a <= 'z');
}

bool is_num (char a){
    return (a >= '0' && a <= '9');
}

int main(){
	weakson;

    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if (is_upper (s[i])){
            string temp;
            temp += s[i];
            if (i + 1 < s.size() && is_lower (s[i + 1])){
                temp += s[++i];
            }
            ll num = 0;
            while (i + 1 < s.size() && is_num (s[i + 1])){
                num = 10 * num + (s[++i] - '0');
            }
            if (num == 0) num = 1;
            if (v.back().find (temp) == v.back().end())
                v.back().insert ({temp, num});
            else v.back()[temp] += num;
        }
        else if (s[i] == '(') v.emplace_back();
        else if (s[i] == ')'){
            ll num = 0;
            while (i + 1 < s.size() && is_num (s[i + 1])){
                num = 10 * num + (s[++i] - '0');
            }
            if (num == 0) num = 1;
            map<string, ll> m = v.back();
            v.pop_back();
            for (auto j : m){
                if (v.back().find (j.F) == v.back().end()){
                    v.back()[j.F] = j.S * num;
                }
                else v.back()[j.F] += j.S * num;
            }
        }
    }

    cout << s << '\n';
    for (auto i : v.back()){
        cout << i.F << ":" << i.S << '\n';
    }

    return 0;
}
