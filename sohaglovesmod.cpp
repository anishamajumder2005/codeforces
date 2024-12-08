#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(2*i -1);
        }
        for(auto it:ans){
            cout<<it<<" ";
        }cout<<endl;
    }
}