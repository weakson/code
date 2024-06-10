#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,temp;
	while(cin>>num){
		queue<int> card;
		if(num==0){
			break;
		}
		if(num==1){
			cout<<"Discarded cards: \n"<<"Remaining card: 1\n";
			continue;
		}
		for(int i=1;i<=num;i++){
			card.push(i);
		}
		cout<<"Discarded cards: ";
		while(card.size()>2){
			cout<<card.front()<<", ";
			card.pop();
			temp=card.front();
			card.pop();
			card.push(temp);
		}
		cout<<card.front();
		cout<<'\n';
		card.pop();
		cout<<"Remaining card: "<<card.front()<<'\n';
	}
	return 0;
}
