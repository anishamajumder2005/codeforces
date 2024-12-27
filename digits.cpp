#include<bits/stdc++.h>
using namespace std;
#define ll int long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,d; cin>>n>>d;
        vector<ll>ans;
        ans.push_back(1);
        if(d%3==0||n>2)ans.push_back(3);
        if(d==5)ans.push_back(5);
        if((n>2)||d==7)ans.push_back(7);
        if(d==9||(d%3==0&&n>2)||n>5)ans.push_back(9);
        for(auto it:ans)cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}
