#include <bits/stdc++.h>
using namespace std;
int main(){
   string s = "abacd"; 
   int hash[26] = {0};
   for(int i=0;i<s.size();i++){
    hash[s[i]-'a']++;
   }
   cout<<hash['a'-'a'];
    return 0;
}