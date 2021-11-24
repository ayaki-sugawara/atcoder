#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int ans=0;
    for(int i=0; i<10000; i++){
        int num = i;
        // cout << num << endl;
        vector<bool> judge(10);
        for(int j=0; j<4; j++){
            int used = num % 10;
            judge[used] = true;
            num = num / 10;
        }
        bool flag = true;
        for(int j=0; j<10; j++){
            // cout << judge[j];
            if(S.at(j)=='o' && judge[j]==false) flag=false;
            if(S.at(j)=='x' && judge[j]==true) flag = false;
        }
        ans+=flag;
    }
    cout << ans << endl;
}