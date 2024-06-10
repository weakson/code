#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	string p;
	cin >> p;
	int pos;
	for (int i = 0; i < p.size(); i++){
		if (p[i] == 'P'){
			pos = i;
		}
	}
	char dir;
	cin >> dir;
	if (dir == 'L'){
		char temp = p[pos];
		p[pos] = p[pos - 1];
		p[pos - 1] = temp;
	}
	else{
		char temp = p[pos];
		p[pos] = p[pos + 1];
		p[pos + 1] = temp;
	}
	cout << p << '\n';
	return 0;
}
