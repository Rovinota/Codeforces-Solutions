#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
void answer ();
const ll N = 1000000007;
int main () {
  optimize()
  int t; cin >> t;
  while(t--) answer();
}
void answer() {
  int a, b;
  cin >> a >> b;
  int mn = min (a, b);
  if ((mn+mn) >= max(a, b)) {
    cout << (mn + mn) * (mn + mn) << endl;
  }
  else {
    cout << max(a, b) * max (a, b) << endl;
  }
}


