#include "stdio.h"
void swap (int *data, int i, int j){ 
	int tmp = data[i];
	data[i] = data[j];
	data[j] = tmp;
}
void heapify(int *data, int length, int parent) {
	int left  = parent * 2 + 1;
	int right = parent * 2 + 2;
	int temp = (left < length && (data[left] > data[parent])) ? left : parent;	
	if (right < length && (data[right] > data[temp])) temp = right;
	if (temp != parent) {
		swap(data, parent, temp);
		heapify(data, length, temp);
	}
}
void heapSort (int *data, int length){
	for (int i = length - 1; i > 0; i --) {
		swap(data, i, 0);
		heapify(data, i, 0);
	}
};
int main(){
	int data[] = { 92,38,59,57,14,52,19,69,23,84 };
	int length =  sizeof(data)/sizeof(data[0]);
	
	for(int i = 0; i < length ; i++) printf("%d ", data[i]);
	printf("\n");
	
	for (int i = length / 2 - 1; i >= 0; i--) heapify(data, length, i);
	
	
	for(int i = 0; i < length ; i++) printf("%d ", data[i]);
	printf("\n");
	
	heapSort(data, length);
	
	for(int i = 0; i < length ; i++) printf("%d ", data[i]);
	printf("\n");
}
