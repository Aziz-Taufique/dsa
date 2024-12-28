#include<bits/stdc++.h>
using namespace std;

// bruit force soln:- tc = n*2, sc = 256
int bruitForceSoln(string &s){
    int maxLen = 0;
    for(int i=0;i<s.size();i++){
        int hash[256] = {0};
        for(int j=i;j<s.size();j++){
            if(hash[s[j]] == 1) break;
            hash[s[j]] = 1;
            int len = j-i+1;
             maxLen = max(len, maxLen);
        }
    }
    return maxLen;
}

// optimal soln :- tc = o(n), sc = 256s
int optimalSoln(string &s){
    int hash[256] = {-1};
    int maxLen = 0;
    int l = 0, r = 0;
    while(r < s.size()){

        if(hash[s[r]] != -1){
            if(hash[s[r]] >= l){
                l = hash[s[r]] + 1;
            } 
        }

        maxLen = max( maxLen, r-l+1);
        hash[s[r]] = r;
        r++;
    }
    return maxLen;
}
int main(){
    string s = "cadbzabcd";
    // cout<<"Ans is: "<<bruitForceSoln(s)<<endl;
    cout<<"Ans is: "<<optimalSoln(s)<<endl;

    return 0;
}