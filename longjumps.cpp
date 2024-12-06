#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int maxsum=0;
        
        /*for(int i=0;i<n;i++){
            int ind=i;
            int currsum=0;
            while(ind<n){
                currsum+=a[ind];
                ind+=a[ind];
            }
            maxsum=max(maxsum,currsum);
        }
        cout<<maxsum<<endl;*/
        vector<int>dp(n,0);
        for(int i=n-1;i>=0;i--){
            if(i+a[i]<n)dp[i]=a[i]+dp[i+a[i]];
            else dp[i]=a[i];
        }
        cout<<*max_element(dp.begin(),dp.end())<<endl;
    }
    return 0;
}