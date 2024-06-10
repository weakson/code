#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

struct Node{
	int num;
	Node *prev = nullptr;
	Node *next = nullptr;
	// Node(int a){
	// 	num = a;
	// }
};

struct Link{
	Node *head;
	Node *tail;
	Link(){
		head = new Node;
		tail = new Node;
		head -> next = tail;
		head -> prev = nullptr;
		tail -> prev = head;
		tail -> next = nullptr;
	}
	void Delete(Node *temp){
		Node *bfr = temp -> prev;
		Node *aft = temp -> next;
		bfr -> next = aft;
		aft -> prev = bfr;
	}
	void insert_before(Node *now, Node *aft){
		Node *prv = aft -> prev;
		prv -> next = now;
		aft -> prev = now;
		now -> prev = prv;
		now -> next = aft;
	}
	Node *back(){
		return tail;
	}
	void swap(Node *temp){
		if (temp -> prev == head) return;
		Node *a = temp -> prev -> prev;
		Node *b = temp -> prev;
		Node *d = temp -> next;
		a -> next = temp;
		temp -> prev = a;
		temp -> next = b;
		b -> prev = temp;
		b -> next = d;
		d -> prev = b;
	}
	void print_all(){
		Node *i = head -> next;
		while (i != tail){
			cout << i -> num;
			if (i != tail -> prev) cout << ' ';
			i = i -> next;
		}
	}
};

int main(){
	int n;
	cin >> n;
	Link link;
	Node *arr[100005];
	for (int i = 1; i <= n ;i++){
		Node *nm = new Node;
		nm -> num = i;
		arr[i] = nm;
		link.insert_before(nm, link.back());
	}
	// link.print_all();
	int m;
	cin >> m;
	for (int i = 0; i < m; i++){
		int op, num;
		cin >> op >> num;
		if (op == 0) link.Delete(arr[num]);
		else{
			link.swap(arr[num]);
		}
	}
	link.print_all();
	cout << '\n';
	return 0;
}
