#include <bits/stdc++.h>
using namespace std;
const int N=1000010;
long long arr[N];
vector<int> primaries;
//エラトステネスの篩
void Eratosthenes(){
	for(int i = 0; i < N; i++){
		arr[i] = 1;
	}
	for(int i = 2; i < sqrt(N); i++){
		if(arr[i]){
			for(int j = 0; i * (j + 2) < N; j++){
				arr[i *(j + 2)] = 0;
			}
		}
	}

	for(int i = 2; i < N; i++){
		if(arr[i]){
            primaries.push_back(i);
		}
	}
}

int main() {
    long long n;
    cin >> n;
    Eratosthenes();
    int ans = 0;
    for(long long q: primaries) {
        if (q * q * q > n) break;
        long long p_maximum = n / (q*q*q);
        //cout << q << endl;
        //cout << p_maximum << endl;
        int p_candidates = lower_bound(primaries.begin(), primaries.end(), min(p_maximum+1, q)) - primaries.begin();
        ans += p_candidates;
        //cout << p_candidates << endl;
        //cout << "=====" << endl;
    }
    cout << ans << endl;
    return 0;
}