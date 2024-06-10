#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<long long> s;
    for (int i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size() << '\n';
    return 0;
}
