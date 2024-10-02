#include<stdio.h>
#include<string.h>

int main(){

    int n;

    while (scanf ("%d\n", &n) == 1){
        char s[1100] = "";
        scanf ("%[^\n]", s);

        int len = strlen (s);

        for (int i = 0; i < n; i++){
            for (int j = i; j < len; j += n){
                printf ("%c", s[j]);
            }
        }
        printf ("\n");
    }
}
