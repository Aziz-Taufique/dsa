#include<bits/stdc++.h>
using namespace std;

// using recursion
void printSubstring(int i, vector<int> &ds, int arr[], int n){
    if(i == n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0) cout<<"{}";
            cout<<endl;
            return;
    }
    ds.push_back(arr[i]);
    printSubstring(i+1, ds, arr, n);
    ds.pop_back();
    printSubstring(i+1, ds, arr, n);
}
int main(){
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printSubstring(0, ds, arr, n);
    return 0;
}