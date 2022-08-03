#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter the input"<<endl;
    int n; cin>>n;
    int count = 0;
    if(n%2==0)
    n=n-1;

    for(int i=1;count<n;i+=2){
        cout<<i<<" ";
        count++;
    }
    cout<<endl;
    return 0;
}