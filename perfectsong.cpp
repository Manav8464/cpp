#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

#define pie acos(-1)
#define int long long int
#define u unsigned
#define ld long double
#define debug(a) cerr << #a << " = " << a << endl
#define pres(n) cout << fixed << setprecision(n)
#define MOD 1000000007

#define loop(i, n) for (int i = 0; i < n; i++)
#define rloop(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define i1(x) \
    int x;    \
    cin >> x;
#define i2(x, y) \
    int x, y;    \
    cin >> x >> y;
#define i3(x, y, z) \
    int x, y, z;    \
    cin >> x >> y >> z;
#define take(x, n)              \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define take_max(x, n, M)       \
    for (int i = 0; i < n; i++) \
        cin >> x[i], M = max(M, x[i]);
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define print_with_size(a)    \
    cout << a.size() << endl; \
    for (auto x : a)          \
        cout << x << " ";     \
    cout << endl




#define initialise(n, k) memset(n, k, sizeof(n))
#define nextl cout << endl
#define setbits(n) __builtin_popcount(n)
#define sz(x) (int)x.size()
#define INF 1e18
#define _INF -1e18
#define _y cout << "YES\n";
#define _n cout << "NO\n";
#define nline "\n"
#define all(v) v.begin(), v.end()
#define rall(v) (v.rbegin(), v.rend())

#define mp(x, y) make_pair(x, y)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvi_size(name, row, col) vector<vector<int>> name(row, vector<int>(col, 0));
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define vstr vector<string>
#define umpii unordered_map<int, int>
#define umpci unordered_map<char, int>
#define pb push_back


void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i]+arr[j])%60==0){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
   // cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout<<"Case #"<<i+1<<": ";
        solve();
    }
    return 0;
}