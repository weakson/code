#include<bits/stdc++.h>
using namespace std;

int main(){
    int command,order,total=0;
    while(cin>>command){
        if(command==0){
            break;
        }
        else if(command==1){
            cin>>order;
            if(order==1){
                cout<<"Medium Wac"<<" 4\n";
                total+=4;
            }
            else if(order==2){
                cout<<"WChicken Nugget"<<" 8\n";
                total+=8;
            }
            else if(order==3){
                cout<<"Geez Burger"<<" 7\n";
                total+=7;
            }
            else if(order==4){
                cout<<"ButtMilk Crispy Chicken"<<" 6\n";
                total+=6;
            }
            else{
                cout<<"Plastic Toy"<<" 3\n";
                total+=3;
            }
        }
        else if(command==2){
            cin>>order;
            if(order==1){
                cout<<"German Fries"<<" 2\n";
                total+=2;
            }
            else if(order==2){
                cout<<"Durian Slices"<<" 3\n";
                total+=3;
            }
            else if(order==3){
                cout<<"WcFurry"<<" 5\n";
                total+=5;
            }
            else{
                cout<<"Chocolate Sunday"<<" 7\n";
                total+=7;
            }
        }
    }
    cout<<"Total: "<<total;
    return 0;
}