#include<stdio.h>
#include<string.h>

int main(){

    int n;

    while (scanf ("%d\n", &n) == 1){
        char s[1100] = "";
        scanf ("%[^\n]", s);

        char ans[300][1100] = {0};
        // string ans[300];

        int len = strlen (s);

        for (int i = 0; i < len; i++){
            int r = (i + 1) % n; // 當前位置的餘數
            int pos = i / n; // 當前位置的商數
            ans[r][pos] = s[i];
        }

        for (int i = 1; i <= n - 1; i++){
            printf ("%s", ans[i]);
        }
        printf ("%s\n", ans[0]);
    }
}
