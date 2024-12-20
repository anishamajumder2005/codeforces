#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s ;
        cin>>s;
        ll cnt0=0;
        vector<ll>cnt(2,0);
        for(auto it:s){
            if(it=='0')cnt0++;
        }
        ll totalcost=0;
        for(auto it:s){
            cnt[it-'0']++;
            if(it=='0')totalcost+=(cnt[1]>0)?1:0;
            else totalcost+=(cnt0-cnt[0]);
        }
        cout<<totalcost<<endl;
    }
    return 0;
}