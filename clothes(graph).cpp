#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int findmin(vector<int>&prices,vector<pair<int,int>>&pairs){
    vector<set<int>>adj(prices.size());
    for(auto it:pairs){
        int u=it.first-1;
        int v=it.second-1;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    int minsum=INT_MAX;
    for(int i=0;i<prices.size();i++){
        for(auto it:adj[i]){
            if(it>i){
                for(auto k:adj[it] ){
                    if(k>it&&adj[i].find(k)!=adj[i].end()){
                        int currsum=prices[i]+prices[it]+prices[k];
                        minsum=min((int)minsum,(int)(currsum));
                    }
                }
            }
        }
    }
    if(minsum==INT_MAX)return -1;
    return minsum;
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<pair<int,int>>matcher(m);
    for(int i=0;i<m;i++){
        cin>>matcher[i].first>>matcher[i].second;
    }
    int res=findmin(a,matcher);
    cout<<res<<endl;
    return 0;
}