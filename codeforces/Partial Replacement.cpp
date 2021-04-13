#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    string str;
    cin >> str;
    int start =0;
    int counts = 0;
    for(int i=0;i<n;i++){
        if(str[i] == '*'){
            str[i] = 'x';
            counts++;
            start = i;
            break;
        }
    }
    for(int i=start+1;i<n;i++){
        if(str[i] == '*' && ((i - start) == k) ){
            str[i] = 'x';
            counts++;
            start = i;
        }
        if(str[i] == '*' && ((i-start) > k)){
            for(int j=i-1;j>=start+1;j--){
                if(str[j] == '*'){
                    str[j] == 'x';
                    counts++;
                    start = j;
                }
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        if(str[i] == '*'){
            str[i] = 'x';
            counts++;
            break;
        }
        if(str[i] == 'x'){
            break;
        }
    }

    cout<<counts<<endl;



}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
