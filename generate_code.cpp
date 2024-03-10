#include<bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), _b = (b); i <= _b; i++)
#define FORD(i, b, a) for (int i = (b), _a = (a); i >= _a; i--)
#define REP(i, b) for (int i = 0, _b = (b); i < _b; i++)
#define ii pair<int, int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define ALL(v) (v).begin(), (v).end()
#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1LL)
#define ll long long
#define ld long double
#define sz(x) ((int)(x).size())
#define next ____next
#define prev ____prev
#define left ____left
#define right ___right
#define lcm ___lcm
#define index ____index
using namespace std;
 
template<class M> M myabs(M x) {
        return x < 0 ? -x : x;
}
template<class M1, class M2> bool minimize(M1 &x, const M2 &y) {
        if (x > y) {x = y; return true;} return false;
}
template<class M1, class M2> bool maximize(M1 &x, const M2 &y) {
        if (x < y) {x = y; return true;} return false;
}
 
const int INF = (int)1e9 + 7;
const ll INFLL = (ll)1e18 + 7LL;
 
const int dx[] = {1, 0, -1, 0, 1, -1, 1, -1};
const int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};
 
//mt19937 rd(time(0));
 
 
#define MAX 


void solve() {
    srand(time(0));
    int n = (int)1e6;
    int x = 0;
    cout << n << "\n";
    FOR(i, 1, n) {
        x += rand() % ((int)1e3) + 1;
        cout << x << " ";
    }
    cout << "\n";
    x = 0;
    FOR(i, 1, n) {
        x -= rand() % ((int)1e3) + 1;
        cout << x << " ";
    }
    cout << "\n";
    FOR(j, 1, 8) {
        FOR(i, 1, n) cout << rand() % INF << " ";
        cout << "\n";
    }
}
 
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        #ifndef ONLINE_JUDGE
        //freopen("test.inp", "r", stdin);
        freopen("test.inp", "w", stdout);
        #else
        //
        #endif // ONLINE_JUDGE*/
        int t = 1; //cin >> t;
        while (t--) solve();
    return 0;
}

