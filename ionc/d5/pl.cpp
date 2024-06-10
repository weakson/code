#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define int long long
#pragma GCC optimize("Ofast")
using namespace std;

const int MAXN=1e18;

signed main(){
    fastio
 
    int n,k,c;cin>>n>>k>>c;
    vector<int> v(n+1);
    for(int i=0;i<n;++i){
        int owo;cin>>owo;
        owo--;
        v[i]=owo;
    }
    vector<vector<int>> dp(n+1,vector<int>(k+1,0));
    for(int i=0;i<n;++i){
        for(int j=0;j<k;++j){
            dp[i][j]=MAXN;
            dp[i][j]=min(dp[i][j],(i?dp[i-1][j]:0)+c);
            if(j==v[i]){
                for(int kk=0;kk<k;++kk) dp[i][j]=min(dp[i][j],(i?dp[i-1][kk]+abs(kk-j):0));
            }
        }
    }
    int ans=MAXN;
    for(int i=0;i<k;++i) ans=min(ans,dp[n-1][i]);
    cout<<ans<<'\n';
}
