#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main(){
    int a=5;
    char word;
    string b="1234";
    stringstream ss;
    //b[0]++;
    b.insert(2,5,' ');
    cout<<b<<'\n';
    //for(char i:b) cout<< (char)(i+1)<<' ';
    //cout<<b[0]<<'\n';
    ss<<a;
    ss>>word;
    cout<<word;
}