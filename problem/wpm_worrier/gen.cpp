#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]); // 从命令行参数获取字符串的长度

    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 ";
    string s;

    for (int i = 0; i < n; i++) {
        char ch = chars[(int)rnd.next(0, chars.size() - 1)];
        s += ch;
    }

    cout << s << endl;

    return 0;
}
