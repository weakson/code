#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a, b;
    char c;

    cin >> a >> c >> b;

    cout << fixed << setprecision(4);

    if (c == '+'){
        cout << a << " + " << b << " = " << a + b << '\n';
    }
    else if (c == '-'){
        cout << a << " - " << b << " = " << a - b << '\n';
    }
    else if (c == '*'){
        cout << a << " * " << b << " = " << a * b << '\n';
    }
    else{
        if (b == 0) cout << "ERROR\n";
        else cout << a << " / " << b << " = " << a / b << '\n';
    }

    return 0;
}
