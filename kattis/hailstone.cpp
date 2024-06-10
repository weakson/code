#include<iostream>
using namespace std;

int main(){
    long long n, sum = 0;
    cin >> n;
    while(n!=1){
        sum += n;
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;    
        }
    }
    sum += 1;
    cout << sum << '\n';
    return 0;
}
