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
  int k, n; cin >> k >> n;
  cout << 1 << " ";
  int dif = 1;
  int prev = 1;
  k--;
  while((dif+prev+(k-1)) <= n && k) {
    prev += dif;
    cout << prev << " ";
    dif++;
    k--;
  }
  for (int i = k; i > 0; i--) cout << ++prev << " ";

  cout << endl;
}


