#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    vector<ll>a(t);
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(auto it:a)sum+=it;
    ll maxi=*max_element(a.begin(),a.end());
    //ll kmin=(2*sum+t-1)/t;
    ll kmin = 1+((2 * sum) ) / t;
    ll k=max((ll)kmin,maxi);
    //cout<<k+1<<endl;
    cout<<k<<endl;
    return 0;
}