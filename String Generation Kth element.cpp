#include<bits/stdc++.h>
using namespace std;
    int main(){
        
        int n,k;
        cin >> n >> k;
        string s = "0";
        while(n--){
            string res = "";
            for(int i =0 ; i < s.length() ; i++){
                if(s[i] == '0')res += "01";
                else if(s[i] == '1') res += "10";
            }
            s = res;
        }
        
        cout << s[k-1];
        return 0;
    }