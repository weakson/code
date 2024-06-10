#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int num,score[100005],min,max;
    double avr;
    while(cin>>num){
        avr=0;
        if(num==0){
            break;
        }
        for(int i=0;i<num;i++){
            cin>>score[i];
            avr+=score[i];
        }
        min=*min_element(score,score+num);
        max=*max_element(score,score+num);
        //cout<<"min: "<<min<<" max: "<<max<<'\n';
        //cout<<"num: "<<num-2<<" avr: "<<avr<<'\n';
        avr-=(min+max);
        num-=2;
        avr/=num;
        cout<<fixed<<setprecision(2)<<avr<<'\n';
    }
    return 0;
}