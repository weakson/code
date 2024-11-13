#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
#define db double
using namespace std;

const db eps = 1e-6;

double dis (db x1, db y1, db z1, db x2, db y2, db z2){
    db a = x2 - x1;
    db b = y2 - y1;
    db c = z2 - z1;

    return sqrt (a * a + b * b + c * c);
}

double cross_area (db x1, db y1, db z1, db x2, db y2, db z2){
    db a = y1 * z2 - y2 * z1;
    db b = z1 * x2 - z2 * x1;
    db c = x1 * y2 - x2 * y1;
    
    return sqrt (a * a + b * b + c * c);
}

bool is_same (db x1, db y1, db z1, db x2, db y2, db z2){
    bool a = (abs (x1 - x2) < eps);
    bool b = (abs (y1 - y2) < eps);
    bool c = (abs (z1 - z2) < eps);

    return a && b && c;
} 

int main(){
	// weakson;

    string s;
    while (cin >> s){
        db x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

        int n;
        cin >> n;
        
        db ln = 0, tot = dis (x1, y1, z1, x2, y2, z2);
        for (int i = 0; i < n; i++){
            db a, b, c, r;
            cin >> a >> b >> c >> r;

            db dis_a = dis (x1, y1, z1, a, b, c);
            db dis_b = dis (x2, y2, z2, a, b, c);

            db v1[3] = {x1 - a, y1 - b, z1 - c};
            db v2[3] = {x2 - a, y2 - b, z2 - c};
            db area = cross_area (v1[0], v1[1], v1[2], v2[0], v2[1], v2[2]);
            db ptl = area / tot;

            db d = sqrt (r * r - ptl * ptl);
            if (ptl - r > eps) continue;
            
            if (ptl < eps){
                if (dis_a - tot >= eps && dis_b - r <= -eps){
                    ln += r - dis_b;
                }
                else if (dis_b - tot >= eps && dis_a - r <= -eps){
                    ln += r - dis_a;
                }
                else if (dis_a < tot && dis_b < tot){
                    ln += min (r, dis_a);
                    ln += min (r, dis_b);
                }
            }
            
            else{
                if (dis_a - r < -eps && dis_b - r < -eps) ln = tot;
                else if (dis_a - r < -eps){
                    ln += sqrt (dis_a * dis_a - ptl * ptl) + d;
                }
                else if (dis_b - r < -eps){
                    ln += sqrt (dis_b * dis_b - ptl * ptl) + d;
                }
                else ln += d * 2;
            }
        }
        cout << s << '\n';
        cout << fixed << setprecision (2) << ln / tot * 100 << '\n';
    }
}
