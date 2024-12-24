#include<bits/stdc++.h>
using namespace std;

bool checkPalindrom(int i,string str){
   if(i>= str.size()/2) return true;

   if(str[i] != str[str.size()-i-1]) return false;

   return checkPalindrom(i+1, str);

}
int main(){
    string str;
    cout<<"Enter str: ";
    cin>>str;
    cout<<checkPalindrom(0, str)<<endl;
    return 0;
}