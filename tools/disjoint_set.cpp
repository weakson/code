#include<bits/stdc++.h>
using namespace std;
			
vector<long long> v;
vector<long long> s;

inline void build(int m){
    for (int i = 0; i < m; i++) v[i] = i;
    return;
}

long long find(int q){
    if (v[q] == q) return q;
    else return v[q] = find(v[q]);
}

void union(int a, int b){
    a = find(a);
    b = find(b);

    if (a == b) return;

    if (s[a] > s[b]) swap(a, b);
    s[b] += s[a];
    v[a] = b;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    v.resize(n);
    s.resize(n, 1);
    build(n);
    char op;
}
