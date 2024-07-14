#include<bits/stdc++.h>

using namespace std;

void naive(const string &txt, const string &pat) {
	int n = txt.length(), m = pat.length();
	for (int i = 0; i < n - m + 1; i++) {
		bool flag = true;
		for (int j = 0; j < m; j++) {
			if (txt[i + j] != pat[j]) {flag = false; break;}
		}
		if (flag) {cout << i << endl;}
	}
}


// Time Complexity = O(n)
vector<int> prefix_function(string s) {
	int n = s.size();
	vector<int> pf(n, 0);
	for (int i = 1; i < n; i++) {
		int l = pf[i - 1];
		while (l > 0 and s[i] != s[l]) l = pf[l - 1];
		if (s[l] == s[i]) l++;
		pf[i] = l;
	}
	return pf;
}

void KMP(const string &txt, const string &pat) { //Knuth–Morris–Pratt algorithm (or KMP algorithm)
	int n = txt.size(), m = pat.size();
	vector<int> pi = prefix_function(pat);
	int pos = -1;
	for (int i = 0, j = 0; i < n;) {
		if (txt[i] == pat[j]) i++, j++;
		else {
			if (j != 0) j = pi[j - 1];
			else i++;
		}
		if (j == m) {pos = i - m; break;}
	}
	cout << pos << endl;
}

unsigned long long hash_funct(const string& str, int s, int e) {
	int base = 32; // we cannot take the base as 2. Base should be > size of the alphabet. {if [base is 2] then hash(aa)==hash(c)}
	unsigned long long h = 0 ;
	for (int j = s; j <= e; j++) {
		// 'a'=1 we have used the 'a' as 1 instead of 0 because if 'a'=0 hash(a)==hash(aa)==hash(aaa......a)
		// 'b'=2
		// .
		// .
		// 'z'=26

		h = (h * base + (str[j] - 'a' + 1)) ; //54*10+9 = 549
	}
	return h;
}

unsigned long long rehash( unsigned long long prev_hash, int length, char _old, char _new) {
	int base = 32;
	unsigned long long oldCharValue = (_old - 'a' + 1) * (long long)pow(base, length - 1) ;
	return ((prev_hash - oldCharValue ) * base + (_new - 'a' + 1)) ;
}

void RabinKarp(const string &txt, const string &pat) { // Rabin-Karp or Rolling Hash String Matching Algorithm
	int n = (int)txt.size(), m = (int)pat.size();
	unsigned long long hash_txt = hash_funct(txt, 0, m - 1), hash_pat = hash_funct(pat, 0, m - 1);
	if (hash_txt == hash_pat) {cout << 0 << endl; return;}
	for (int i = 1; i < n - m + 1 ; i++) {
		hash_txt = rehash(hash_txt, m, txt[i - 1], txt[i + m - 1]);
		if (hash_txt == hash_pat) {cout << i << endl; return;}
	}
	cout << -1 << endl;
}


void solve() {
	string txt, pat; cin >> txt >> pat;
	naive(txt, pat);
	KMP(txt, pat);
	RabinKarp(txt, pat);

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}