#include <iostream>
using namespace std;
const int N = 1e6 + 10;
struct node {
  node *l, *r, *p;
  int id;
  node (node *p, int id): l(nullptr), r(nullptr), p(p), id(id) {}
};
void dfs (node* root) {
  int tmp;
  /*DO NOT MODIFY ABOVE*/
  tmp = 0;
  while (root -> l != nullptr){
	  cout << root -> id << '\n';
	  root = root -> l;
	  tmp++;
  }
  /*DO NOT MODIFY BELOW*/
}
int e[N][3];
node* build (int id, node* p) {
  if (id == 0) {
    return nullptr;
  }
  node* ret = new node(p, id);
  ret->l = build(e[id][1], ret);
  ret->r = build(e[id][2], ret);
  return ret;
}
int main () {
  int m, root;
  cin >> m >> root;
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    e[a][c] = b;
    e[b][0] = a;
  }
  dfs(build(root, nullptr));
}
