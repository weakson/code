#include<iostream>
using namespace std;

long long tree[200005];

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, tmp;
    tree[0] = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> tmp;
        tree[i] = tree[i - 1] + tmp;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        int r, l;
        cin >> l >> r;
        if (l > r) swap(r, l);
        cout << tree[r] - tree[l - 1] << '\n';
    }
    return 0;
}
