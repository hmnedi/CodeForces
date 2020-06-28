// 85293358	    Jun 28, 2020 5:02 PM	    208A - Dubstep	    GNU G++17 7.3.0	    Accepted
#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    string s;
    cin >> s;
    while(1){
        if (s.find("WUB") != string::npos){
            int it = s.find("WUB");
            s.replace(it, 3, " ");
        }
        else {
            cout << s;
            break;
        }
    }
}
