#include<bits/stdc++.h>
using namespace std;

void reverArray(vector<int> &arr,int i, int j){
    if(i>=j){
        return;
    }
    swap(arr[i], arr[j]);
    reverArray(arr,i+1, j-1);
}

void reverArrayTwo(vector<int> &arr, int i){
    if(i>arr.size()/2) return;

    swap(arr[i], arr[arr.size()-i-1]);
    reverArrayTwo(arr, i+1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    
    // reverArray(arr, 0, n-1);
    reverArrayTwo(arr, 0);

    for(auto it: arr){
        cout<<it<<" ";
    }
    return 0;
}