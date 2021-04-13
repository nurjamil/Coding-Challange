#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string bits1;
    string bits2;
    cin >> bits1 >> bits2;
    vector<bool> check(n);
    int countzeros = 0;
    int countones = 0;
    check[0] = bits1[0] == bits2[0];
    if(bits1[0] == '0') countzeros++;
    else countones++;
    for(int i=1;i<n;i++){
        check[i] = bits1[i] == bits2[i];
        if(check[i] != check[i-1]){
            if(countzeros != countones){
                cout<<"NO"<<endl;
                return;
            }
        }
        if(bits1[i] == '0') countzeros++;
        else countones++;
    }
    if(check[n-1] == false && countzeros != countones){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
