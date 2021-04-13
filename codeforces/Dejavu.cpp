#include <bits/stdc++.h>

using namespace std;

void solve(){
    string a;
    cin >> a;
    int size = a.size();
    int i;
    for(i=0;i<size;i++){
        if(a[i] != 'a'){
            break;
        }
    }
    if(i == size){
        cout<<"NO"<<endl;
        return;
    }
    string temp = 'a' + a;
    int left,right,mid;
    mid = temp.size()/2;
    right = mid;
    left = mid-1;
    if(temp.size() % 2 == 1 ){
        left = mid;
    }
    while(left >= 0 && right <temp.size() && temp[left] == temp[right]){
        left--;
        right++;
    }
    if(left < 0 && right == temp.size()){
        cout<<"YES"<<endl;
        string ans = "";
        ans = a + 'a';
        cout<<ans<<endl;
        return;
    }
        cout<<"YES"<<endl;
        cout<<temp<<endl;





}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
