#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &arr, int k, int n){
    int lsum = 0, rsum = 0, maxSum = 0;
    for(int i=0;i<k;i++){
        lsum+= arr[i];
    }

    maxSum = lsum;
    int rindex = n-1;
    for(int i=k-1;i>=0;i--){
        lsum -= arr[i];
        rsum += arr[rindex];
        rindex--;
        maxSum = max(maxSum, lsum + rsum);
    }
    return maxSum;
}

int main(){
    vector<int> v = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int k = 4;
    int n = 9;
    cout<<"Ans is: "<<find(v, k, n)<<endl;
    return 0;
}