#include<bits/stdc++.h>

using namespace std;

// struct Node{
// 	int n; // current number of keys present
// 	int key[MAX_KEYS];
// 	Node* child[MAX_CHILDERN]; //MAX_CHILDERN=MAX_KEYS+1, n=[0,MAX_KEYS)
// 	bool leaf;
// };

// Node* BTreeSearch(Node* x,int x){
// 	int i=0;
// 	while(i<x->n&&k>x->key[i]) i++;
// 	if(i<x->n&&k==x.key[i]) return x;
// 	if(x->leaf) return nullptr;
// 	return BTreeSearch(x->child[i],k);
// }

class BTreeNode {
	int t; //Minimum degree (defines the range for number of keys)
	int n; //Current number of keys
	int *keys; // Array of keys
	BTreeNode **C; // An array of child pointers
	bool leaf; // Is true when the mode is leaf. Otherwise false
public:
	BTreeNode(int _t, int _leaf); //constructor
	void traverse(); // A function to seach a key in the subtree rooted with this Node
	BTreeNode *search(int k); // A function to seach a key in the subtree rooted with this Node
	friend class BTree; // Make the BTree friend of this
};

void solve() {

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}