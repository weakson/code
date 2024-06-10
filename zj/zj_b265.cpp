#include<iostream>
#include<sstream>
#include<algorithm>
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define ll long long
using namespace std;

int main(){
	weakson;
	int n;
	while (cin >> n){
		if (n == 0) break;
		int a[10005];
		string s[10005];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < 5; j++){
				cin >> a[j];
			}
			sort (a, a + 5);
			for (int j = 0; j < 5; j++){
				stringstream ss;
				string temp;
				ss << a[j];
				ss >> temp;
				s[i] += temp;
			}
		}
		sort (s, s + n);
		// for (int i = 0; i < n; i++) cout << s[i] << '\n';

		int cnt = 1, arr[10005], j = 0;
		for (int i = 1; i < n; i++){
			if (s[i] == s[i - 1]){
				cnt++;
			}
			else if (i == n - 1){
				arr[j] = cnt;
				cnt = 1;
				j++;
			}
			else{
				//cout << "cnt = " << cnt << '\n';
				arr[j] = cnt;
				cnt = 1;
				j++;
			}
		}
		arr[j] = cnt;
		j++;
		sort (arr, arr + j);
		//cout << "arr = ";
		// for (int i = 0; i < j; i++){
		// 	cout << arr[i] << ' ';
		// }
		// cout << '\n';
		int mx = arr[j - 1];
		int counter = 1;
		for (int i = j - 2; ; i--){
			if (arr[i] == mx){
				counter++;
			}
			else break;
		}
		cout << counter * mx << '\n';
	}
	return 0;
}
