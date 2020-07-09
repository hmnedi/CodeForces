#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<n/2;i++){
            if (s.find("()") != string::npos){
                int it = s.find("()");
                s.replace(it, 2, "");
            }else{
                break;
            }
        }
        cout << s.size()/2 << "\n";
    }
}
