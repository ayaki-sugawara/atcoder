#include<bits/stdc++.h>
using namespace std;
const double PI=3.141592653589793;
int main() {
    float a, b, d;
    cin >> a >> b >> d;
    std::cout << std::fixed;
    float r = d / 180 * PI;
    float A = a * cos(r) - b * sin(r);
    float B = b * cos(r) + a * sin(r);
    cout << setprecision(10) << A <<" " << B << endl;
    return 0;
}