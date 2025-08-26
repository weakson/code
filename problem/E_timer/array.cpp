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

struct DQ{
    int arr[500005];
    int l, r;

    inline void init(){
        for (int &i : arr) i = 0;
        l = 0;
        r = 0;
    }
    
    inline void push_back (ll x){
        arr[r++] = x;
    }

    inline void pop_back (){
        arr[r--] = 0;
    }

    inline void pop_front(){
        arr[l++] = 0;
    }

    inline int back(){
        return arr[r - 1];
    }
    
    inline int front(){
        return arr[l];
    }

    inline bool empty(){
        return r - l;
    }
};

DQ Min, Max;

int main(){
    weakson;

    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int &i : v) cin >> i;

    while (q--){
        int k; cin >> k;

        Min.init();
        Max.init();

        ll sum = 0;

        for (int i = 0; i < n; i++){
            sum += v[i];

            while (!Max.empty() && v[i] > v[Max.back()]) Max.pop_back();
            Max.push_back (i);

            while (!Min.empty() && v[i] < v[Min.back()]) Min.pop_back();
            Min.push_back (i);

            while (!Max.empty() && Max.front() <= i - k) Max.pop_front();

            while (!Min.empty() && Min.front() <= i - k) Min.pop_front();

            if (i >= k - 1){
                cout << (sum - v[Max.front()] - v[Min.front()]) / (k - 2) << ' ';
                sum -= v[i - k + 1];
            }
        }

        cout << '\n';
    }
}
