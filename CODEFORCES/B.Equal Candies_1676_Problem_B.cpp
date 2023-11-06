#include <bits/stdc++.h> 
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORE(i, a, b) for (int i = a; i <= b; ++i)
#define VOI()(ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int A[55];
int main()
{
	VOI();
	int t;
  cin >> t;
  int ans;                                     //https://codeforces.com/contest/1676/problem/B
  int x,sum,n;
  while(t--){
    sum = 0;
    cin >> n;
    ans = 10000009;
    FORE(i,1,n){
      cin >> A[i]; sum+=A[i];
      ans = min(A[i],ans);
    }
    cout << sum-ans*n << '\n';
  }
	return 0;
  //CODE GAY MÃI FAN TPB 
}
