#include<bits/stdc++.h>
#define INTMAX 1e18
#define ll int long long
using namespace std;
int solve(int index ,vector<int> &dp){
    if(index <= 1){
        return index;
    }
    if(dp[index]!= -1){
        return dp[index];
    }
    int left = solve(index - 1 ,dp);
    int right = solve(index - 2,dp);

    return dp[index]=left + right;
}
int32_t main(){
    ll t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    int ways =solve(n ,dp);
    cout<<ways<<endl;
    }
    return 0;
}