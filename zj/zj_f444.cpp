#include<iostream>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
    
    long long x;

    while (cin >> x){

        string s;
        cin.ignore();
        getline (cin, s);

        long long arr[100], pos = 0;

        for (int i = 0; i < s.size(); i++, pos++){
            long long tmp = 0;
            bool is_neg = false;
            while (s[i] != ' ' && i < s.size()){
                if (s[i] == '-') is_neg = true;
                else{
                    tmp *= 10;
                    tmp += s[i] - '0';
                }
                i++;
            }
            if (is_neg) arr[pos] = -tmp;
            else arr[pos] = tmp;
        }

        long long xn = 1, sum = 0, cnt = 1;
        for (int i = pos - 2; i >= 0; i--){
            sum += xn * arr[i] * cnt;
            xn *= x;
            cnt++;
        }
        
        cout << sum << '\n';
    }
}
