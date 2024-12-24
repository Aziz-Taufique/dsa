#include<bits/stdc++.h>
using namespace std;

// Q1:- Print linearly from 1 to N
void printFromOneToFive(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    printFromOneToFive(i+1, n);
}

// Q2:- Print from N to 1;
void printFromNToOne(int n){
    if(n==0) return;
    cout<<n<<endl;
    printFromNToOne(n-1);
}

// Q3:- Print linearly from 1 to N by backtracking.
void printOneToNBacktarcking(int n){
    if(n == 0) return;
    printOneToNBacktarcking(n-1);
    cout<<n<<endl;
}

// Q4:- Print from N to 1 by backtracking.
void printFromNToONeBacktracking(int i, int n){
    if(i > n) return;
    printFromNToONeBacktracking(i+1, n);
    cout<<i<<endl;
}

// Q5:- Print sum of n number (Parameterised way).

void sumOfNNumbers(int i, int sum){
    if(i < 1){
    cout<<sum<<endl;
    return;
    }
    sumOfNNumbers(i-1, sum+i);
}

// Q5:- Print sum of n number (functional way).

int sumOfNNumbersFunctionalWay(int n){
    if(n == 0) return 0;
    return n + sumOfNNumbersFunctionalWay(n-1);
}

// Q6:- Factorial of n;
int factorialOfN(int n){
    if(n == 1) return 1;
    return n * factorialOfN(n-1);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // printFromOneToN(1, n);
    // printFromNToOne(n);
    // printOneToNBacktarcking(n);
    // printFromNToONeBacktracking(1, n);
    // sumOfNNumbers(n, 0);
    // cout<<sumOfNNumbersFunctionalWay(n)<<endl;
    cout<<factorialOfN(n)<<endl;
  
    return 0;
}