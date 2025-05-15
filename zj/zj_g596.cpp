#include<iostream>
using namespace std;

int m, n, h;

int g[105][105];
// g[r][c] == 1 ---> 直線
// g[r][c] == 2 ---> 橫線
// g[r][c] == 3 ---> 就是直線與橫線的交集
// g[r][c] == 100 ---> 木樁

int dr[4] = {0, -1, 0, 1};
int dc[4] = {-1, 0, 1, 0};
// k = 0 ~ 3
// k = 0 ---> 左邊
// k = 1 ---> 上面
// k = 2 ---> 右邊
// k = 3 ---> 下面

// 判斷 (r, c) 有沒有在範圍內
bool is_inside (int r, int c){
    return (r >= 0 && r < m && c >= 0 && c < n);
}

int main(){

    cin >> m >> n >> h;

    // Area 為當前面積
    // Max_area 為最大面積
    int Area = 0, Max_area = -1;

    while (h--){
        
        int r, c, t;
        cin >> r >> c >> t;

        if (t == 0){

            // 若當前為空地，則將面積 +1
            if (g[r][c] == 0) Area++;
            // 將 (r, c) 設為木樁
            g[r][c] = 100;

            for (int k = 0; k < 4; k++){

                // (nr, nc) 為下一格要走的位置
                int nr = r + dr[k];
                int nc = c + dc[k];

                // 只要 (nr, nc) 在範圍內
                // 且該位置不是木樁
                // 就一直朝這個方向移動
                while (is_inside (nr, nc) && g[nr][nc] != 100){
                    nr += dr[k];
                    nc += dc[k];
                }

                // while 迴圈跳出有可能是超出範圍或是踩到木樁
                // 這邊如果超出範圍就直接 continue
                // 所以後續可以保證 (nr, nc) 為第 k 個方向最近的木樁
                if (!is_inside (nr, nc)) continue;

                // 往回走一個
                nr -= dr[k];
                nc -= dc[k];

                // 這裡就一直往回走，直到踩到原本的 (r, c)
                while (nr != r || nc != c){

                    // 若 dc[k] == 0，表示目前沒有橫向位移，則要連成直線
                    if (dc[k] == 0){ 

                        // 如果當前這格已經是橫線的某一部分，我就再加一條直線
                        if (g[nr][nc] == 2) g[nr][nc] += 1;

                        // 又或者這格是空地，則將這格設為直線，並將當前面積 +1
                        else if (g[nr][nc] == 0){
                            Area++;
                            g[nr][nc] = 1;
                        }
                        
                        // 剩下 g[nr][nc] == 1 或 3 不用特別處理，因為 1 或 3 本身就包含直線了
                    }

                    // 反之，要連成橫線
                    else{

                        // 如果當前這格已經是直線的某一部分，我就再加一條橫線
                        if (g[nr][nc] == 1) g[nr][nc] += 2;

                        // 又或者這格是空地，則將這格設為橫線，並將當前面積 +1
                        else if (g[nr][nc] == 0){
                            Area++;
                            g[nr][nc] = 2;
                        }

                        // 剩下 g[nr][nc] == 2 或 3 不用特別處理，因為 2 或 3 本身就包含橫線了
                    }
                    
                    // 繼續往回走
                    nr -= dr[k];
                    nc -= dc[k];
                }
            }

            // 更新 Max_area
            Max_area = max (Max_area, Area);
        }
        else{

            // 將木樁還原
            g[r][c] = 0;
            // 因為木樁會直些消失，所以面積可以直接 -1
            Area--;

            for (int k = 0; k < 4; k++){

                // (nr, nc) 一樣代表下一個位置
                int nr = r + dr[k];
                int nc = c + dc[k];

                // 因為接下來兩個判斷會用到 g[nr][nc]，為了避免 RE，先把超出範圍的情況篩掉
                if (!is_inside (nr, nc)) continue;

                // dc[k] == 0 與上面同理，表示當前是直線
                // 如果要刪除直線，且下一格不是直線，就直接跳過
                if (dc[k] == 0 && (g[nr][nc] == 0 || g[nr][nc] == 2)) continue;

                // dc[k] != 0 就表示橫線
                // 如果要刪除橫線，且下一格不是橫線，就直接跳過
                if (dc[k] != 0 && (g[nr][nc] == 0 || g[nr][nc] == 1)) continue;

                // 只要在範圍內，且 (nr, nc) 不是木樁，就一直走
                while (is_inside (nr, nc) && g[nr][nc] != 100){

                    // 要刪除直線，就把那格 -= 1
                    if (dc[k] == 0){
                        g[nr][nc] -= 1;
                    }

                    // 要刪除橫線，就把那格 -= 2
                    else{ // 橫線
                        g[nr][nc] -= 2;
                    }

                    // 如果減完之後發現這格歸零，那就視為空地，面積 -1
                    if (g[nr][nc] == 0){
                        Area--;
                    }

                    // 繼續走
                    nr += dr[k];
                    nc += dc[k];
                }
            }
        }
    }

    cout << Max_area << '\n' << Area << '\n';
}
