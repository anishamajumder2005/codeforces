#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i=0,j=n-1;
        ll sumleft=a[0];
        ll sumright=a[n-1];
        ll cnt=0;
        while(i<j){
            if(sumleft==sumright){
                cnt=max(cnt,i+1+n-j);
            }
            if(sumleft<=sumright){
                i+=1;
                sumleft+=a[i];
            }if(sumright<=sumleft){
                j-=1;
                sumright+=a[j];
            }
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}