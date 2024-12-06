#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<ll>cubes(n);
    for(ll i=0;i<n;i++)cin>>cubes[i];
    sort(cubes.begin(),cubes.end());
    for(int i=0;i<n;i++)cout<<cubes[i]<<" "; 
    return 0;
}