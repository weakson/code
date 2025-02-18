#include<iostream>
using namespace std;

int main(){

    int Money, M, Type;
    cin >> Money >> M >> Type;

    // 紀錄目前時間
    int Time = 0;

    while (Money > 0){

        // 蘋果派，32 元
        if (Type == 0){
            if (Money < 32){
                break;
            }

            Money -= 32;
            cout << Time << ": Wayne eats an Apple pie, and now he ";

            if (Money == 0){
                cout << "doesn't have money.\n";
            }
            else if (Money == 1){
                cout << "has " << Money << " dollar.\n";
            }
            else{
                cout << "has " << Money << " dollars.\n";
            }
        }

        // 玉米濃湯，55 元
        else{
            if (Money < 55){
                break;
            }

            Money -= 55;
            cout << Time << ": Wayne drinks a Corn soup, and now he ";

            if (Money == 0){
                cout << "doesn't have money.\n";
            }
            else if (Money == 1){
                cout << "has " << Money << " dollar.\n";
            }
            else{
                cout << "has " << Money << " dollars.\n";
            }
        }

        Time += M;
        // 確保 Type 在 0 和 1 之間循環
        Type = (Type + 1) % 2;
    }

    // 若跳出迴圈後，時間為 0，表示沒有吃任何東西
    if (Time == 0){
        cout << "Wayne can't eat and drink.\n";
    }
}
