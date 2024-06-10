#include<bits/stdc++.h>
using namespace std;

int xa,ya,ra,xb,yb,rb;
long long ans=0;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	
	cin>>xa>>ya>>ra>>xb>>yb>>rb;
	
	if(xa+ra>=xb && xa+ra<=xb+rb){
		if(ya+ra>=yb && ya+ra<=yb+rb){
			ans=(xa+ra-xb)*(ya+ra-yb);
		}
		else if(ya>=yb && ya<=yb+rb){
			ans=(xa+ra-xb)*(ya-yb);
		}
	}
	else if(xb+rb>=xa && xb+rb<=xa+ra){
		if(yb+rb<=ya+ra&&yb+rb>=ya){
			ans=(xb+rb-xa)*(yb+rb-ya);
		}
		else if(yb<=ya+ra && yb>=ya){
			ans=(xb+rb-xa)*(ya+ra-yb);
		}
	}
	cout<<ans<<'\n';
	return 0;
}
