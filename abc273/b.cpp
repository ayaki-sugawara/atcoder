#include<bits/stdc++.h>
using namespace std;

int main() {
    int k;
    long long x;
    cin >> x >> k;
    vector<int> x_digit;
    while(true){
        x_digit.push_back(x%10);
        x /= 10;
        if(x==0) break;
    }
    x_digit.push_back(0);
    for(int i=0; i<k; i++){
        if(i>x_digit.size()-1) break;
        if(x_digit[i] > 4) {
            x_digit[i+1] += 1;
        } 
        x_digit[i] = 0;
    }
    long long ans = 0;
    for(int i=(int)x_digit.size()-1; i>=0; i--) {
        ans += x_digit[i] * (pow(10,i));
    }
    cout << ans << endl;

    return 0;
}