#include <bits/stdc++.h>

using namespace std;

void solve(string s){
    int length = s.size();
    int start11 = 0;
    for(int i=0;i<length-3;i++){
        if(s.substr(i,2) == "11") {
                start11 = i+2;
                break;
        }
    }
    if(start11 == 0){
        cout<< "YES" << endl;
        return;
    }
    for(int i=start11;i<length-1;i++){
        if(s.substr(i,2) == "00") {
            cout << "NO" <<endl;
            return;
        }
    }
    cout << "YES" <<endl;

}

int main(){
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        string s;
        cin >> s;
        solve(s);
    }
}
