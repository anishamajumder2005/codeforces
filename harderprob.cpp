#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        set<ll>st;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            
        }
        unordered_set<int>st1;
        for(ll i=1;i<=n;i++)st.insert(i);
        vector<ll>b(n);
        //ll maxi=*max_element(a.begin(),a.end());
        for(ll i=0;i<n;i++){
            
            if(st1.find(a[i])!=st1.end()){
                auto it=st.begin();
                b[i]=*it;
                st.erase(it);
            }else{
                b[i]=a[i];
            }
            st1.insert(b[i]);
            st.erase(b[i]);
        }
        for(ll i=0;i<n;i++)cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}