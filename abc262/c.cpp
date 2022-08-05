#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    /*
     * min(ai, aj) = i <-> ai=i or aj=i
     * max(ai, aj) = j <-> ai=j or aj=j
     * (ai=i and aj=j) or (ai=j and aj=i)なるペアを探せばよい
     * ai=i and aj=jの場合、それを満たすものから2つの組み合わせ
     * 満たす個数をsとすればs(s-1)/2
     *
     * ai=j and aj=iの場合それだけ
     */
    int A[N + 1];
    for (int i = 1; i < N + 1; i++)
    {
        cin >> A[i];
    }
    long long s = 0;
    long long ans = 0;
    for (int i = 1; i < N + 1; i++)
    {
        if (A[i] == i)
        {
            s++;
        }
        else
        {
            if (A[A[i]] == i)
                ans++;
        }
    }
    cout << ans / 2 + s * (s - 1) / 2 << endl;
    return 0;
}