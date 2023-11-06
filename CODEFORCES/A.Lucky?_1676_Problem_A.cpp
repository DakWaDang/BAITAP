#include <bits/stdc++.h> 
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORE(i, a, b) for (int i = a; i <= b; ++i)
#define VOI()(ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
ll A[200005];
int main()
{
	VOI();
	int t;
  cin >>t;
  int ans;                                     //https://codeforces.com/contest/1676/problem/A
  int x,temp;
  while(t--){
    ans=0;
    cin >> x;
    if(x == 0){ cout << "YES" << '\n'; continue;}
    if (log10(x)+1 <= 3) {cout << "NO" << '\n'; continue;} 
    temp = (x%10)+((x/10)%10)+((x/100)%10);
    while(x > 0){ans+= x%10; x/=10;}
    (ans == temp << 1) ? cout << "YES" << '\n': cout << "NO" << '\n';
  }
	return 0;
  //CODE GAY MÃI FAN TPB 
}
