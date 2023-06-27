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
   answer();
}
void answer() {
    int n, m; cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+m);
    // for (int i = 0; i < n; i++) cout <<  a[i] << " ";
    // cout << endl;
    // for (int i = 0; i < m; i++) cout <<  b[i] << " ";
    int i = 0, j = 0, ans = 0;
    while(i < n && j < m) {
        if (abs(a[i] - b[j]) <= 1) {
            i++;
            j++;
            ans++;
        }
        else {
            if (a[i] < b[j]) i++;
            else j++;
        }
    }
    cout << ans << endl;
}

