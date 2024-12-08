#include<bits/stdc++.h>
#include<./vector>
using namespace std;
vector<vector<int>> scale(vector<vector<int>>&arr,int k){
    int n=arr.size();
    int blocksize=n/k;
    vector<vector<int>>ans(blocksize,vector<int>(blocksize,0));
    for(int i=0;i<blocksize;i++){
        for(int j=0;j<blocksize;j++){
            int sum=0;
            for(int x=0;x<k;x++){
                for(int y=0;y<k;y++){
                    sum+=arr[i*k + x][j*k+y];
                }
            }
            ans[i][j]=sum/(k*k);
        }
    }
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int t,k;
        cin>>t>>k;
        vector<vector<int>>input(t,vector<int>(t));
        for(int i=0;i<t;i++){
            string row;
            cin>>row;
            for(int j=0;j<t;j++){
                input[i][j]=row[j]-'0';
            }
        }
        vector<vector<int>>ans=scale(input,k);
        for(int i=0;i<(t/k);i++){
            for(int j =0;j<(t/k);j++){
                cout<<ans[i][j];
            }cout<<endl;
        }cout<<endl;
        n--;
    }
    return 0;
}