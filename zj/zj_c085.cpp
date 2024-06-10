#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	long long z,i,m,l,k = 1;
	while(cin >> z >> i >> m >> l){
		int ran[10005] = {0};

		if(z == 0 && i == 0 && m == 0 && l == 0){
			break;// 若為4個0，就表示輸入結束
		}
		
		cout << "Case " << k << ": " ;
		
		long long count = 0;

		ran[0] = l;
	
		for(int j = 1; j <=9999; j++){

			l = (z * l + i) % m;
			ran[j] = l;

			for(int n = 0; n < j; n++){
				if(ran[n] == ran[j]){
					count = j - n;
				}
			}

			if(count != 0){
				break;
			}
		}

		cout << count << '\n';
		k++;
	}
}
