#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int, string> > mountains(N);
    for (int i; i<N; i++){
        cin >> mountains.at(i).second >> mountains.at(i).first;
    }
    sort(mountains.begin(), mountains.end(), greater{});
    cout << mountains.at(1).second << endl;

}