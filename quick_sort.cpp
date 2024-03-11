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

void quicksort(int left, int right) {
    if (left > right) return;
    if (left == right) return;
    if (left + 1 == right) {
        if (a[left] > a[right]) swap(a[left], a[right]);
        return;
    }
    
    int pivot = right;
    int l = left, r = right - 1;
    while (l < r) {
        while (l < r && a[l] < a[pivot]) l++;
        while (l < r && a[r] >= a[pivot]) r--;
        if (l < r) swap(a[l], a[r]);
    }
    swap(a[l], a[pivot]);
    pivot = l;
    quicksort(left, pivot - 1);
    quicksort(pivot + 1, right);
    return;
}

void solve() {
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
    
    quicksort(1, n);
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
