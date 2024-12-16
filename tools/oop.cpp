#include<iostream>
using namespace std;

class Car{
    public:
        int a = 1;
        Car (int x){ // constructor
            a = 4;
            cout << "constructor\n";
        }
        Car (Car &p){ // copy constructor
            cout << "copy constructor\n";
        }
        Car (Car &&p){ // move constructor

        }
        // func1 is link
        // func1 belongs global
        static void func1 (Car &p){
            p.a = 5;
            cout << p.a << '\n';
        }
        static void func1 (Car *p){
            p -> a = 10;
            cout << p -> a << '\n';
        }
        // operator overload
        int operator + (int b){
            return a + b;
        }
        int operator + (Car b){
            return a + b.a;
        }
        // functor
        Car &operator () (int x){
            cout << "functor\n";
            return *this;
        }
        Car *operator () (int x, int y){
            cout << "functor\n";
            return this;
        }
};

Car car(4);

int main(){
    // Car::func1(car);
    Car tmp = car(1);
    Car &tmp1 = car;
    car.a = 100000;

    cout << tmp.a << '\n';
    cout << tmp1.a << '\n';

    // cout << tmp -> a  << '\n';
}
