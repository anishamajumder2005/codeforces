#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    vector<string>mag(t);
    for(int i=0;i<t;i++)cin>>mag[i];
    ll cnt=1;
    for(ll i=1;i<t;i++){
        if(mag[i]==mag[i-1])continue;
        else cnt+=1;

    }
    cout<<cnt<<endl;
    return 0;
}