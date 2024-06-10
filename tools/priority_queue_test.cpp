// constructing priority queues
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <vector>         // std::vector
#include <functional>     // std::greater
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp (const pair<int,int>& lhs, const pair<int,int>& rhs){
        if(lhs.first==rhs.first) return lhs.second>rhs.second;
        return (lhs.first>rhs.first);
}

//bool cmpair(int &x,int &y){
//    return x<y;
//}

class mycomparison
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false){
        reverse=revparam;
  }
  bool operator() (const pair<int,int>& lhs, const pair<int,int>& rhs) const
  {
    return lhs.first*lhs.first+lhs.second*lhs.second>rhs.first*rhs.first+rhs.second*rhs.second;
    //if (reverse) {
    //    if(lhs.first==rhs.first) return lhs.second>rhs.second;
    //    return (lhs.first>rhs.first);
    //}
    //else{
    //    if(lhs.first==rhs.first) return lhs.second>rhs.second;
    //    return (lhs.first<rhs.first);
    //}
  }
};

int main ()
{
  int myints[]= {10,60,50,20};
  vector<pair<int,int>> v;

  v.emplace_back(1,2);
  v.emplace_back(3,1);
  v.emplace_back(2,3);
  v.emplace_back(2,2);

  std::priority_queue<int> first;
  std::priority_queue<int> second (myints,myints+4);
  std::priority_queue<pair<int,int>, std::vector<pair<int,int>>, std::greater<pair<int,int>> >
                            third;
  third.push(v[0]);
  third.push(v[1]);
  third.push(v[3]);
  third.push(v[2]);

  // using mycomparison:
  typedef priority_queue<pair<int,int>, std::vector<pair<int,int>>, mycomparison > mypq_type;
  mypq_type fifth;
  //typedef bool (*Cmpfun)(pair<int,int>,pair<int,int>);
  //priority_queue<pair<int,int>, std::vector<pair<int,int>>, Cmpfun > fifth (cmp);   // greater-than comparison

  fifth.push(v[0]);
  fifth.push(v[1]);
  fifth.push(v[3]);
  fifth.push(v[2]);

  sort(v.begin(),v.end(),cmp);
  for(int i=0;i<v.size();i++){
      cout<<v[i].first<<' '<<v[i].second<<'\n';
  }
  cout<<'\n';
  int length=fifth.size();
  for(int i=0;i<length;i++){
      std::cout<<fifth.top().first<<' '<<fifth.top().second<<'\n';
      fifth.pop();
  }
  std::cout<<'\n';
  //for(int i=0;i<4;i++){
  //    std::cout<<second.top()<<'\n';
  //    second.pop();
  //}

  return 0;
}

