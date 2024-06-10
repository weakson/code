#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
	int ans = 0;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        
        int len = s.size();
        for (int j = 0; j < len; j++){
            if (s[j] < 'Z') s[j] += 32;
        }
        
        for (int j = 0; j < len; j++){
            if (s[j] == 'p' and s.substr (j, 4) == "pink"){
                ans++;
				break;
            }
            else if (s[j] == 'r' and s.substr (j, 4) == "rose"){
                ans++;
				break;
            }
        }
        
    }

	if (ans == 0) cout << "I must watch Star Wars with my daughter\n";
	else cout << ans << '\n';

    return 0;
}
