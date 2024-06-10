#include <iostream>
using namespace std;
int main(){
    int a,b[50],i=0,sum=0;
    cin>>a;
    if(a%2==1){
        while(cin>>b[i]){
            i++;
        }
        
        cout<<"still running\n";
        i=0;
        }
        
    else{
        int n=0;
        for(int i;i<a;i++){
            cin>>b[i];    
            n++;
        }
        

        i=0;
        for(int i;i<a/2;i++){
            sum=sum+(b[n]-b[n-1]);
            n-=2;
        }
    
        cout<<sum<<"\n";
    }
    
    
    return 0;
}
