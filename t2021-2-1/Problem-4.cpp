#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter the number of elements"<<endl;
    int n; cin>>n;

    vector<int> arr(n);
    cout<<"Enter elements one by one"<<endl;

    map<int,int> mp;
    
    for(int i=1;i<=9;i++){
        mp.insert({i,0});
    }

    for(int i=0;i<n;i++){
        cin>>arr[i];
        for(auto m:mp){
            if(arr[i]%m.first==0)
            mp[m.first]++;
        }
    }

    for(auto m:mp){
        cout<<m.first<<":"<<m.second<<", ";
    }
    cout<<endl;
    return 0;
}