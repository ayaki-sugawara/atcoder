#include <bits/stdc++.h>
using namespace std;

int isUsedA[100000100];
int isUsedB[100000100];

vector<vector<int>> A;
vector<vector<int>> B;
int main() {
    A.push_back({0});
    B.push_back({0});
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int a; 
        cin >> a;
        if(isUsedA[a]==0) {
            isUsedA[a] = 1;
            vector<int> temp = A.at(i);
            temp.push_back(a);
            sort(temp.begin(), temp.end());
            A.push_back(temp);
        } else {
            A.push_back(A.at(i));
        }
    } 
    for(int i=0; i<n; i++) {
        int b; 
        cin >> b;
        if(isUsedB[b]==0) {
            isUsedB[b] = 1;
            vector<int> temp = B.at(i);
            temp.push_back(b);
            sort(temp.begin(), temp.end());
            B.push_back(temp);
        } else {
            B.push_back(B.at(i));
        }
    } 
    int q;
    cin >> q;
    for(int i=0; i<q; i++) {
        int x, y;
        cin >> x >> y;
        if(A.at(x)==B.at(y)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}