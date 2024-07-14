#include <bits/stdc++.h>
using namespace std;

#define d 256
#define q 1000000007

vector<int> naiveStringMatching(string text,string pattern){
    vector<int> loc;
    int n = text.size();
    int m = pattern.size();
    for(int j=0;j<=n-m;j++){
        int i;
        for(i=0;i<m&&pattern[i]==text[i+j];i++);
        if(i>=m) loc.push_back(j);
    }
    return loc;
}

long long computeHash(string s, int begin, int end){
    long long hash=0;
    for(int i=begin;i<=end;i++){
        hash=(hash+int(s[i])*(long long )(pow(2,end-i)))%q;
    }
    return hash;
}

long long rehash(long long hash, char old_char, char new_char, int m) {
    return (long long)((d * (hash - old_char * pow(d, m - 1)) + new_char) % q + q) % q;
}


int rabinKarpStringMatching(string text, string pattern){
    int n=text.length();
    int m=pattern.length();
    
    long long pattern_hash = computeHash(pattern, 0, m-1);
    long long last_window_hash = computeHash(text,0,m-1);
    for(int i=0;i<=n-m;i++){
        if(pattern_hash==last_window_hash && text.substr(i,m)==pattern) return i;
        if(i < n-m) last_window_hash=rehash(last_window_hash,text[i],text[i+m],m);
    }
    
    return -1;
}

int main() {
    string text = "ABCCDDAEFG";
    string pattern = "CDD";
    cout << "First occurrence of pattern at index " << rabinKarpStringMatching(text, pattern) << endl;
    return 0;
}
