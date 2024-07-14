#include <iostream>
#include <queue>
#include <map>
#include <vector>

using namespace std;

// A node of the Huffman's Tree
struct Node{
    char ch;
    int freq;
    Node *left;
    Node *right;
    
    Node(char ch, int freq,Node *left=nullptr, Node *right=nullptr){
        this->ch=ch;
        this->freq=freq;
        this->left=left;
        this->right=right;
    }
};

class Compare {
    public:
        bool operator()(Node* a, Node *b){
            return a->freq>b->freq; //min heap
        }
};

Node* buildHuffmanTree(map<char, int> &freq){
    //building the priority queue(min heap priority queue) of the Node
    priority_queue<Node*, vector<Node*>, Compare> pq;
    
    //addinfg the value to the priority queue
    for(auto pair: freq){
        pq.push(new Node(pair.first,pair.second));
    }
    
    // loop untill there is only one node left in the priority queue 
    while(pq.size()>1){
        //extracting the two node with the lowest frequecy
        Node *left = pq.top(); pq.pop();
        Node *right = pq.top(); pq.pop();
        
        //creating the new node as the combination of the previous node
        Node *parent = new Node('\0',left->freq+right->freq,left,right);
        pq.push(parent);
    }
    return pq.top();
}

void generateCodes(Node *root,string code, map<char,string> &codes){
    // root case : leaf node
    if(root==nullptr){
        return;
    }
    
    if(root->ch!='\0'){
        codes[root->ch]=code;
    }
    
    //recursion to add all other code
    generateCodes(root->left,code+"0",codes);
    generateCodes(root->right,code+"1",codes);
}

void printCodes(map<char, int>&freq,map<char,string> &codes){
    cout<<"Char\tFreq\tCode"<<endl;
    for(auto pair:freq){
        cout<<pair.first<<"\t"<<pair.second<<"\t"<<codes[pair.first]<<endl;
    }
}

string encode(string text, map<char, string> &codes){
    string encoded="";
    for(char ch:text){
        encoded+=codes[ch];
    }
    return encoded;
}

string decode(string encoded, Node*root){
    string decoded="";
    Node*curr = root;
    for(char ch: encoded){
        if(ch=='0'){
            curr=curr->left;
        }
        else{
            curr=curr->right;
        }
        if(curr->ch!='\0'){
            decoded+=curr->ch;
            curr=root;
        }
    }
    return decoded;
}


int main(){
    string text="Huffman Encoding the compression technique works on the greedy paradims";
    
    //map to store the freq of the char
    map<char, int> freq;
    for(char ch: text){
        freq[ch]++;
    }
    
    Node*root=buildHuffmanTree(freq);
    
    
    //map to store the code 
    map<char, string> codes;
    generateCodes(root,"",codes);
    
    printCodes(freq,codes);
    string encodedText = encode(text,codes);
    cout<<"Encoded Text: "<<encodedText<<endl;
    
    string decodedText = decode(encodedText, root);
    cout<<"Decoded Text: "<<decodedText<<endl;
    return 0;
}