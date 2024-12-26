#include<bits/stdc++.h>
using namespace std;

// bruit force soln
int bruitForce(vector<int> &arr, int n, int k){
    int maxLen = 0;
    for(int i=0;i<n;i++){
       int sum = 0;
       for(int j=i;j<n;j++){
        sum += arr[j];
        if(sum <= k) maxLen = max(maxLen, j-i+1);
       }
    }   
    return maxLen;
}


// by sorting
int sortingSoln(vector<int> &arr, int n, int k){
    
   sort(arr.begin(), arr.end());

    int maxLen = 0;
    int sum =0;
   for(int i=0;i<=n;i++){
    if(sum > k) break;
    sum += arr[i];
    maxLen = i;
   }
   return maxLen;
}

// better soln:- two pointer and slinding window
int betterSoln(vector<int> &arr, int n, int k){
    int l = 0;
    int r = 0;
    int sum = 0;
    int maxLen = 0;
    while(r<n){
        sum += arr[r];
        while(sum > k){
            sum -= arr[l];
            l++;
        }
        if(sum <= k){
            maxLen = max(maxLen, r-l+1);
            r++;
        }
    }
    return maxLen;
}

// optimal Soln
int optimalSoln(vector<int> &arr, int n, int k){
    int l = 0, r = 0;
    int maxLen = 0, sum = 0;
    while(r<n){
        sum += arr[r];
        if(sum > k){
            sum -= arr[l];
            l++;
        }
        maxLen = max(maxLen, r-l+1);
        r++;
    }
    return maxLen;
}

int main(){
    vector<int> v = {2, 5, 1, 7, 10};
    int n = 5;
    int k = 14;
    // cout<<"Ans is: "<<bruitForce(v, n, k)<<endl;
    // cout<<"Ans is: "<<sortingSoln(v, n, k)<<endl;
    // cout<<"Ans is: "<<betterSoln(v, n, k)<<endl;
    cout<<"Ans is: "<<optimalSoln(v, n, k)<<endl;
    return 0;
}