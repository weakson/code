#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int y;
        cin >> y;
        if ((y % 4 == 0 and y % 100 != 0) or y % 400 == 0){
            cout << "a leap year\n";
        }
        else{
            cout << "a normal year\n";
        }
    }
    return 0;
}
