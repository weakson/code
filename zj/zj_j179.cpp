#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

string cal (string s){
  string ret;

  int a = s[0] - '0';
  int b = s[1] - '0';
  int c = a * b;

  if (c < 10) ret += c + '0';
  else{
    ret += (c / 10) + '0';
    ret += (c % 10) + '0';
  }
  return ret;
}

string sol (string s){
  string l, r, ret;

  if (s.size() == 1) return s;
  else if (s.size() == 2){
    return sol (cal (s));
  }
  else if (s.size() == 3){
    l = s.substr (0, 2);
    r = s.substr (1, 2);
    l = cal (l);
    r = cal (r);
    ret += l;
    ret += r;
    if (l == "0") return sol (r);
    else return sol (ret);
  }
  else if (s.size() == 4){
    l = s.substr (0, 2);
    r = s.substr (2, 2);
    if (l[0] == '0'){
      l = l[1];
    }
    else{
      l = cal (l);
    }
    if (r[0] == '0'){
      r = r[1];
    }
    else{
      r = cal (r);
    }
    ret += l;
    ret += r;
    if (l == "0") return sol (r);
    else return sol (ret);
  }
}

int main(){
	weakson;

  int n;
  cin >> n;

  stack<char> stk;
  string s;
  while (n){
    stk.push (n % 10 + '0');
    n /= 10;
  }
  while (!stk.empty()){
    s += stk.top();
    stk.pop();
  }

  cout << sol (s) << '\n';
}
