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
 
 
#define MAX 1000100

int n;
int a[MAX];


#define GET_MAX(i, j, k) ((a[i] >= max(a[j], a[k]) ? (i) : (a[j] >= max(a[i], a[k]) ? (j) : (k))))
int find_max_node(int i, int n) {
    if (i > n) return 0;

    int l = find_max_node(i << 1, n);
    int r = find_max_node(i << 1 | 1, n);

    return GET_MAX(i, l, r);
}
void heapify(int i, int n) {
    int l = i << 1;
    int r = i << 1 | 1;

    int mx = i;
    if (l <= n && a[l] > a[mx]) mx = l;
    if (r <= n && a[r] > a[mx]) mx = r;
    if (mx == i) return;

    swap(a[mx], a[i]);
    heapify(mx, n);
}
void heap_sort() {
    FOR(i, 1, n) {
        int j = find_max_node(i, n);
        swap(a[i], a[j]);
    }
    
    FORD(i, n, 2) {
        swap(a[1], a[i]);

        heapify(1, i - 1);
    }
}

void solve() {
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
    a[0] = -INF;
    heap_sort();
    FOR(i, 1, n) cout << a[i] << " ";
}
 
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        #ifndef ONLINE_JUDGE
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
        #else
        //
        #endif // ONLINE_JUDGE*/
        int t = 1; //cin >> t;
        while (t--) solve();
    return 0;
}
