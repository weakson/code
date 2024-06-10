#include<iostream>
using namespace std;

int cntlen(int num, int len){
    len++;
    if (num == 1) return len;
    if (num & 1) return cntlen (3 * num + 1, len);
    else return cntlen (num / 2, len);
}

int main(){
    int i, j;
    while (cin >> i >> j){
        int maxn = -1;
        for (int n = i; n <= j; n++){
            int len = cntlen(n, 0);
            //cout << "len= " << len << '\n';
            maxn = max(len, maxn);
        }
        cout << i << ' ' << j << ' ';
        cout << maxn << '\n';
    }
    return 0;
}
