#include<bits/stdc++.h>
using namespace std;

struct aaa{
    int ac=0;
    static int b;
    aaa(const char c[]= 0){
        ac=atoi(c == nullptr? "": c);
    }
    void bbb(){
        ac++;
    }
    aaa operator -- (int){
        aaa a;
        a.ac=a.ac*ac;
        return a;
    }
};

int aaa::b = 0;

int main(){
    printf("%d\n",aaa::b);
    aaa a,b;
    a.b++;
    printf("%d\n",b.b);
    b.b++;
    a.bbb();
    printf("%d",a.b);
    printf("%d",b--);
}