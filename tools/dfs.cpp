#include<bits/stdc++.h>
using namespace std;

int high,width;
int brick[1000][1000];
int visit[1000][1000]={};
int tx,ty,sx,sy,ex,ey;
char road;
const int wayx[4]={1,0,-1,0};
const int wayy[4]={0,1,0,-1};

bool cango(int x,int y){
	return x>=0 && y>=0 && x<high && y<width && brick[x][y]!=1 && visit[x][y]==0;
}

int dfs(int x,int y){
	bool is_done=0;
	cout << '(' << x << ',' << y << ')' << '\n';
	visit[x][y]++;
	if(x==ex&&y==ey){
		cout<<"this is the end\n";
		return 1;
	}
	for(int i=0;i<4;i++){//searching for the END
		tx=x+wayx[i];
		ty=y+wayy[i];
		if(cango(tx,ty)){
			is_done=dfs(tx,ty);
			break;
		}
	}
	if(is_done) return 1;
	for(int i=0;i<4;i++){//if there is no way can go and still didn't find the END
		tx=x+wayx[i];
		ty=y+wayy[i];
		if(visit[tx][ty]==1){
			visit[x][y]++;
			is_done=dfs(tx,ty);
		}
	}
	if(is_done) return 1;
	else return 0;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	bool is_found=0;
	cin >> high >> width;//enter high and width
	for(int i=0;i<high;i++){//enter square
		for(int j=0;j<width;j++){
			cin >> road;
			if(road=='1')//represent brick
				brick[i][j]=1;
			else if(road=='S'||road=='s')//represent START
				sx=i,sy=j;
			else if(road=='E'||road=='e')//represent END
				ex=i,ey=j;
			else brick[i][j]=0;
		}
	}
	is_found=dfs(sx,sy);
	if(is_found)//if dfs has visit the END 
		cout << "In this case, you can find END with Depth First Search.\n";
	else
		cout << "In this case, you can't find the END with Depth First Search.\n";
	return 0;
}
