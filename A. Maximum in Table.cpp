#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int a[n+1][n+1];
  for (int j = 1; j <= n; j++) {
    a[1][j] = 1;
  }
  for (int j = 1; j <= n; j++) {
    a[j][1] = 1;
  }
  for (int i = 2; i <= n; i++) {
    for (int j = 2; j <= n; j++) {
      a[i][j] = a[i-1][j] + a[i][j-1];
    }
  }
  int ans = a[n][n];
  cout << ans << endl;
}
