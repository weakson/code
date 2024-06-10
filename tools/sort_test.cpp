#include <bits/stdc++.h>
using namespace std;

vector<int> arr ={2,3,1};

int main(){
	char str[4]={'A','P','C','S'};
	sort(arr.begin(), arr.end());	
	for(int i=0;i<3;i++){
		printf(" %d",arr[i]);
	}
	printf("\n");
	reverse(str,str+4);
	printf("\n",str);
	return 0;
}
