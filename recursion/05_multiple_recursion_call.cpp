#include<bits/stdc++.h>
using namespace std;

// itterative way
int fibonacci(int n){
    if(n<=1) return n;
    int prev = 0, curr = 1, next;
    for(int i=2;i<=n;i++){
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return next;
}

// Recursive way
int recursiveWay(int n){
    if(n<=1) return n;
    int last = recursiveWay(n-1);
    int secLast = recursiveWay(n-2);
    return last + secLast;
}

// AnotherRecursiveWay
int anotherRecursiveWay(int n){
    if(n<=1) return n;
    return anotherRecursiveWay(n-1) + anotherRecursiveWay(n-2);
}
int main(){
    int n;
    cout<<"Enter position of fibonacci number: ";
    cin>>n;
    // cout<<"Fibonacci number of position "<<n<<" is "<<fibonacci(n)<<endl;
    // cout<<"Fibonacci number of position "<<n<<" is "<<recursiveWay(n)<<endl;
    cout<<"Fibonacci number of position "<<n<<" is "<<anotherRecursiveWay(n)<<endl;
    return 0;
}