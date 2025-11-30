#include<bits/stdc++.h>
using namespace std;
    int main(){
        string s;
        getline(cin , s);
        stringstream ss (s);
        int x;
        vector<int> arr;
        while(ss >> x){
            arr.push_back(x);
        }
        int res = 0;
        int n = arr.size();
        for(int i =0 ; i < n ; i ++){
            for(int j = 0 ; j < n ; j++){
                if(abs(arr[i]-arr[j]) <= min(arr[i],arr[j])){
                    res = max(res , arr[i] ^ arr[j]);
                }
            }
        }
        cout << res;
        return 0;
    }