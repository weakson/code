#include<bits/stdc++.h>
#include<time.h>
using namespace std;

class aaa{
    public:
    int num;
    void p(int a=1,int b=2){
        cout<<a+b<<'\n';
    }
};

int main(){
    long s=clock();
    aaa test;
    test.p();
    long e=clock();
    cout<<(e-s)<<'\n';
    return 0;
}