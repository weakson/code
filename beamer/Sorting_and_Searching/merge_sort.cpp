#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort (vector<int> v){

    int len = v.size();
    int mid = len / 2;
    vector<int> a, b;
    
    for (int i = 0; i < mid; i++) a.push_back (v[i]);
    for (int i = mid; i < len; i++) b.push_back (v[i]);
    
    if (a.size() > 1) a = merge_sort (a);
    if (b.size() > 1) b = merge_sort (b);
    
    int aptr = 0, bptr = 0;
    vector<int> ans;
    
    while (aptr < a.size() && bptr < b.size()){
    	if (a[aptr] < b[bptr]) ans.push_back (a[aptr++]);
    	else ans.push_back (b[bptr++]);
    }
    
    while (aptr < a.size()) ans.push_back (a[aptr++]);
    while (bptr < b.size()) ans.push_back (b[bptr++]);
    
    return ans;
}

int main(){
    int n;

    cin >> n;
    vector<int> inp(n);
    
    for (int i = 0; i < n; i++) cin >> inp[i];

    inp = merge_sort (inp);

    for (auto i : inp) cout << i << ' ';
    cout << '\n';

    return 0;
}
