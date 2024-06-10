#include<bits/stdc++.h>
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int arr[105];

int main(){
	weakson;

	int q;
	cin >> q;

	arr[0] = 1;
	int ptr = 0;

	while (q--){
		string op;
		cin >> op;
		if (op == "RS"){
			if (ptr == 0) arr[ptr] = 0;
			else arr[ptr--] = 0;
		}
		else if (op == "LS"){
			if (ptr != 0 || arr[ptr] != 0){
				arr[++ptr] = 0;
			}
		}
		else if (op == "Rp"){
			int x;
			cin >> x;
			arr[ptr] = x;
		}
	}
	
	for (int i = 0; i <= ptr; i++) cout << arr[i];
	cout << '\n';

	return 0;
}
