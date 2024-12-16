#include<bits/stdc++.h>
using namespace std;
int lcs(string &a,string &b){
    int n=a.size();
    int m=b.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1])dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=0+max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][m];
}
int main(){
    string a,b;
    cin>>a>>b;
    if(a==b)cout<<-1<<endl;
    else cout<<max(a.size(),b.size())<<endl;
    return 0;
}