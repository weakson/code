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

struct node{
  ll max, min, con, l, r;
  node(){
    max = 0;
    min = 0;
    con = 0;
  }
};

struct segment_tree{
  vector<node> v;

  segment_tree (int n){
    v.resize (4 * n);
  }

  void pull (int id){
    int L = id * 2;
    int R = id * 2 + 1;
    if (v[L].max == v[R].max){
      v[id].max = v[L].max;
    }
  }
};

int main(){
	weakson;
}
