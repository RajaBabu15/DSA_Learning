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