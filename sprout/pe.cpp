#include<iostream>
#include<set>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    long long n, k;
    cin >> n >> k;
    set<long long, greater<long long> > s;
    for (int i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        s.insert(temp);
    }
    long long minn = 1e15;
    int cnt = 0;
    while (true){
        long long e = *--s.end();
        if (k - e >= e){
            s.erase(--s.end());
            s.insert(k - e);
        }
        else break;
    }
    while (true){
        long long b = *s.begin();
        if (k - b <= b){
            s.erase(s.begin());
            s.insert(k - b);
        }
        else break;
    }
    cout << *s.begin() - *--s.end() << '\n';
    return 0;
}
