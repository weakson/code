#include<iostream>
using namespace std;

long long cntlen(int num, long long len){
    len++;
    if (num == 1) return len;
    if (num & 1) return cntlen (3 * num + 1, len);
    else return cntlen (num / 2, len);
}

int main(){
    int i, j;
    while (cin >> i >> j){
        cout << i << ' ' << j << ' ';
        if (i > j) swap (i, j);
        long long maxn = -1;
        for (int n = i; n <= j; n++){
            long long len = cntlen(n, 0);
            //cout << "len= " << len << '\n';
            maxn = max(len, maxn);
        }
        cout << maxn << '\n';
    }
    return 0;
}
