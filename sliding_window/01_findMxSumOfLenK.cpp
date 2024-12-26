#include<bits/stdc++.h>
using namespace std;

int findMaxSum(vector<int>&arr, int n, int k){
    int windowSum = 0;
    for(int i=0;i<k;i++){
        windowSum += arr[i];
    }

    int maxSum = windowSum;
    for(int i=k; i<=n;i++){
        windowSum += arr[i] - arr[i-k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}


int findMaxSumSecondWay(vector<int>&arr, int n, int k){
    int windowSum = 0;
    for(int i=0;i<k;i++){
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    int l = 0;
    int r = k-1;
    while(r<n-1){
        windowSum -= arr[l];
        l++;
        r++;
        windowSum += arr[r];
        maxSum = max(windowSum, maxSum);
    }
    return maxSum;
}


int main(){
    vector<int> v = {-1, 2, 3, 3, 4, 5, -1};
    int n = 7;
    int k = 4;
    // cout<<"Ans is: "<<findMaxSum(v, n, k)<<endl;
     cout<<"Ans is: "<<findMaxSumSecondWay(v, n, k)<<endl;
    return 0;
}