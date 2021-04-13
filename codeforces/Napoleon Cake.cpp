#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> cake(n);
    vector<int> result(n);
    for(int i=0;i<n;i++){
        cin >> cake[i];
    }
    int cream = 0;
    for(int i=n-1;i>=0;i--){
        if(cake[i] > cream){
            cream = cake[i];
        }
        if(cream > 0){
            result[i] = 1;
            cream--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
