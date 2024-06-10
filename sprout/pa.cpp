#include<iostream>
#include<vector>
#include<set>
#define ll long long
using namespace std;

vector<pair<int, int> > v(60);
int pri[9][9][18];
set<pair<int, int>, greater<pair<int, int> > > hand[4];

int find_num(string s){
    if (s == "SA") return 0;
    else if (s.size() == 3) return 10;
    else if (s[1] >= '2' and s[1] <= '9') return (int)(s[1] - '0');
    else if (s[1] == 'A') return 1;
    else if (s[1] == 'J') return 11;
    else if (s[1] == 'Q') return 12;
    else return 13;
}

int find_col(string s){
    if (s[0] == 'S') return 0;
    else if (s[0] == 'H') return 1;
    else if (s[0] == 'D') return 2;
    else return 3;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    for (int i = 0; i < 52; i++){
        string s;
        cin >> s;
        v[i] = make_pair(find_num(s), find_col(s));
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++){
            for (int k = 0; k < 4; k++){
                cin >> pri[i][k][j];
            }
        }
    }
    int pointer = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            int num = v[pointer].first;
            int col = v[pointer].second;
            if (num != 0) set[j].insert(pri[j][col][num], num);
            else set[j].insert(pri[j][0][0], num);
            pointer++;
        }
    }
    while (pointer != 52){
        i
    }
}
