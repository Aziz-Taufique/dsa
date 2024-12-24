#include<iostream>
using namespace std;


void fn(int i, int n){
    if(i>n) return;
    cout<<i<<" Aziz"<<endl;
    fn(i+1, n);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    fn(1, n);
    return 0;
}
