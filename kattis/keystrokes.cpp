#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

struct Node{
	Node *next, *prev;
	char data;
};

struct Lili{
	Node *head, *tail, *pos;
	Lili(){
		head = new Node;
		tail = new Node;
		pos = tail;

		head -> prev = nullptr;
		tail -> next = nullptr;

		head -> next = tail;
		tail -> prev = head;
	}

	void ls(){
		pos = pos -> prev;
	}

	void rs(){
		pos = pos -> next;
	}

	void insert(char x){
		Node* temp = new Node;

		temp -> data = x;

		Node* pre = pos -> prev;

		pre -> next = temp;
		pos -> prev = temp;

		temp -> prev = pre;
		temp -> next = pos;

		return;
	}

	void del(){
		//if (pos -> prev == head) return;
		Node* pre = pos -> prev -> prev;
		Node* temp = pos -> prev;
		
		pre -> next = pos;
		pos -> prev = pre;

		delete temp;

		return;
	}

	void ans(){
		Node* it = head -> next;
		while (it != tail){
			cout << it -> data;
			it = it -> next;
		}
		cout << '\n';
		return;
	}
};

Lili v;

int main(){
	weakson;

	string s;
	cin >> s;

	int len = s.size();

	for (int i = 0; i < len; i++){
		if (s[i] == 'L') v.ls();
		else if (s[i] == 'R') v.rs();
		else if (s[i] == 'B') v.del();
		else v.insert (s[i]);
	}

	v.ans();

	return 0;
}
