#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(3,9);
    vector<pair<int,int>> v1(9,{0,0});
    v.push_back(3);
    v.push_back(45);
    v1.push_back(make_pair(1,2));
    v1.emplace_back(3,4);
    printf("\nindex ver\n");
    for(int i=0;i<v.size();i++) printf("v[%d]=%d\n",i,v[i]);
    printf("\niterator ver\n");
    for(vector<int>::iterator it=v.begin();it<v.end();it++){
        printf("v[%ld]=%d\n",it-v.begin(),v[it-v.begin()]);
    }
    printf("\n");
    printf("v[2]= %d\n",v[2]);
    printf("smallest element = %d\n",*min_element(v.begin(),v.end()));
    printf("v1[0].first= %d v1[0].second= %d\n",v1[0].first,v1[0].second);
    printf("v1[1].first= %d v1[1].second= %d\n",v1[1].first,v1[1].second);
    //printf("and its index = %d\n",min_element(v.begin(),v.end())-v.begin());
    return 0;
}