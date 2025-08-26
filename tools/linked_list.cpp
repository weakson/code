#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

struct Node{
    Node *next = nullptr;
    Node *prev = nullptr;
    ll num;

    Node(int x = 0){
        num = x;
    }
};

struct Linked_list{

    Node *head;
    Node *tail;
    int n = 0;

    Linked_list(){
        head = new Node;
        tail = new Node;
        head -> prev = nullptr;
        tail -> next = nullptr;
        head -> next = tail;
        tail -> prev = head;
    }

    ~Linked_list(){
        Node *i = head -> next;

        while (i != tail){
            Node *temp = i -> next;
            delete i;
            i = temp;
        }

        if (!head) delete head;
        if (!tail) delete tail;
    }

    Node *insert_after(Node *node, ll data){
        Node *a = node;
        Node *b = new Node(data);
        Node *c = node -> next;
        a -> next = b;
        c -> prev = b;
        b -> prev = a;
        b -> next = c;
        n++;
        return b;
    }
    
    Node *insert_before(Node *node, ll data){
        return insert_after(node -> prev, data);
    }

    void delete_after(Node *node){
        Node *a = node;
        Node *c = node -> next -> next;
        a -> next = c;
        c -> prev = a;
        n--;
    }

    void delete_before(Node *node){
        delete_after(node -> prev -> prev);
    }

    Node *front(){
        return head -> next;
    }

    Node *back(){
        return tail -> prev;
    }

    int size(){
        return n;
    }

    Node *find (ll data){
        Node *it;
        for (it = head -> next; it != tail; it = it -> next){
            if (it -> num == data){
                return it;
            }
        }
        return tail;
    }

    void travel (Node *Now){
        if (Now == tail) return;
        cout << Now -> num << ' ';
        travel (Now -> next);
    }
};

int main(){
    weakson;
}
