#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORE(i, a, b) for (int i = a; i <= b; ++i)
#define VOI() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
string A[105];
int main()
{
  VOI();
  int t;
  cin >> t;
  int ans; // https://codeforces.com/contest/1676/problem/C
  int q, n;
  int S;
  while (t--)
  {
    int ans = 99999;
    cin >> n >> q;
    FOR(i, 0, n)
    cin >> A[i];
    FOR(i, 0, n - 1)
    {
      FOR(j, i + 1, n)
      {
        S = 0;
        FOR(k, 0, q)
        {
          S += abs(A[i][k] - A[j][k]);
        }
        ans = min(S, ans);
      }
    }
    cout << ans << '\n';
  }
  return 0;
  // CODE GAY MÃI FAN TPB
}
