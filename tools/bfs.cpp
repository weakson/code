#include<bits/stdc++.h>
using namespace std;

int visit[1000][1000]={};
queue<pair<int,int> > breadth;
int brick[1000][1000]={};
int sx,sy,ex,ey,tx,ty;
int high,width;
char road;
int wayx[4]={1,0,-1,0};
int wayy[4]={0,1,0,-1};

bool cango(int x,int y){
	return x>=0 && y>=0 && x<high && y<width && brick[x][y]==0 && visit[x][y]==0;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>high>>width;
	for(int i=0;i<high;i++){
		for(int j=0;j<width;j++){
			cin>>road;
			if(road=='s') sx=i;sy=j;
			if(road=='e') ex=i,ex=j;
			if(road=='1') brick[i][j]=1;
		}
	}
	cout<<sx<<' '<<sy;
	int x,y;
	breadth.push({sx,sy});
	while(visit[ex][ey]!=1){
		x=(breadth.front()).first;
		y=(breadth.front()).second;
		cout<<'('<<x<<','<<y<<")\n";
		breadth.pop();
		visit[x][y]=1;
		for(int i=0;i<4;i++){
			tx=x+wayx[i];
			ty=y+wayy[i];
			if(cango(tx,ty)){
				breadth.push({tx,ty});
			}
		}
	}
	if(visit[ex][ey]==1){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}
	return 0;
}
