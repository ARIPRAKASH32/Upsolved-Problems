#include<bits/stdc++.h>
using namespace std;
    int main(){
        string s;
        cin >> s;
        string res = "";
        unordered_set<string> seen;
        for(int i = 0 ; i < s.length() ; i++){
            for(int j = i ; j < s.length() ; j++){
                string sub = s.substr(i,j+1-i);
                if(seen.count(sub) && sub.length() > res.length()){
                    res = sub;
                }
                seen.insert(sub);
            }
        }
        cout << res;
        return 0;
    }