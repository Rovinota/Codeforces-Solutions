#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, k;
  cin >> n >> k;
  int a[n+1];
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int check = a[k];
  for (int i = 1; i <= n; i++) {
    if (a[i] > 0 && a[i] >= check) ans++;
  }
  cout << ans << endl;

}

