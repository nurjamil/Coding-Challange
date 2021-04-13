#include <bits/stdc++.h>

using namespace std;

void solve(int n){
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    map<int,int> occurence;
    for(int i: nums){
        occurence[i]++;
    }
    int maxx = 0;
    for(auto i : occurence){
        maxx = max(i.second,maxx);
    }
    int oddOrEven = n & 1;
    int ans = max(oddOrEven,2*maxx - n);
    cout<<ans<<endl;
}


int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        solve(n);
    }
}
