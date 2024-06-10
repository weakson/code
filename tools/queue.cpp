#include<iostream>
#define int long long
using namespace std;

struct que{
	int arr[10000]={};
	int head = 0;
	int tail = 0;
	const int sizeArr = sizeof(arr) / sizeof(arr[0]);

	int *p=arr,*t=arr;
	void push(int a) {
		int next = head + 1;
		if (next == sizeArr) next = 0;
		
		if (next == tail) {
			printf("Full") ;
			return;
		}
		arr[head] = a;
		head = next;
	}

	int pop(){
		if (head == tail) {
			printf("Empty");
			return arr[head];
		}
		int temp = arr[tail];
		tail++ ;
		if ( tail == sizeArr) tail = 0;
		return temp;
	}

};

signed main(){
	que n;
	n.push(5);
	cout<<n.top();
}
