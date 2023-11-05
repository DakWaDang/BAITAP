#include <iostream>
using namespace std;
int n,s,ans,X[14],d[14];
void bk(int pos)
{
if(pos == n+1){
    int sum = 0;
    for(int i = 1; i<=n ; ++i) {
    cout << d[i] << " ";
    if (d[i])
        sum+=X[i];
    }
    if (sum == s) cout << " || ";
    cout << " \n";
    return;
}
    d[pos] = 0;
    bk(pos+1);
    d[pos] = 1;
    bk(pos+1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for(int i = 1 ; i <= n; ++i ) cin >> X[i];
    bk(1);
    cout << ans;
    return 0;
}
