#include<bits/stdc++.h>
using namespace std;

template<typename T = int>  
using myvector = vector<T>;//c++

//typedef vector<int> vec;//c

int main(){
    myvector<> v1; // declare a vector<int> call v1
    myvector<double> v2; // declare a vector<double> call v2

    if(typeid(v1)==typeid(vector<int>)) cout<<"v1 is an integer vector.\n";
    else cout<<"v1 is not an integer vector.\n";

    if(typeid(v2)==typeid(vector<int>)) cout<<"v2 is an integer vector.\n";
    else cout<<"v2 is not an integer vector.\n";
    
    return 0;
}