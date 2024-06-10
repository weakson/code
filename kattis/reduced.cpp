#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	int sin[n];
	for (int i = 0; i < n; i++){
		cin >> sin[i];
	}
	bool is_diff;
	int	m = 1;
	while(true){
		is_diff = true;
		int tmp[n];
		for (int i = 0; i < n; i++){
			tmp[i] = sin[i] % m;
			for (int j = 0; j < i; j++){
				if (tmp[j] == tmp[i]){
					is_diff = false;
					break;
				}
			}
			if (!is_diff) break;
		}
		if (is_diff) break;	
		m++;
	}
	cout << m << '\n';
	return 0;
}
