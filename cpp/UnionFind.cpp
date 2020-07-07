// 最初のテンプレート

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <bitset>
#include <set>
#include <unordered_set>
#include <cmath>
#include <complex>
#include <deque>
#include <iterator>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <limits>
#include <iomanip>
#include <functional>
#include <cassert>
using namespace std;

using ll=long long;
template<class T> using V = vector<T>;
template<class T, class U> using P = pair<T, U>;
using vll = V<ll>;
using vvll = V<vll>;
#define rep(i, k, n) for (ll i=k; i<(ll)n; ++i)
#define REP(i, n) rep(i, 0, n)
#define ALL(v) v.begin(),v.end()
template < class T > inline bool chmax(T& a, T b) {if (a < b) { a=b; return true; } return false; }
template < class T > inline bool chmin(T& a, T b) {if (a > b) { a=b; return true; } return false; }
#define DEBUG_VLL(vec) REP(sz, vec.size()) std::cerr<<vec[sz]<<(sz==vec.size()-1?'\n':' ');

const long long MOD = 1000000007;
const long long HIGHINF = (long long)1e18;
const int INF = (int)1e9;

// verified at https://judge.yosupo.jp/submission/14944
class UnionFind {
public:
    int n;
    std::vector<int> par;
    UnionFind(int n) : n(n), par(n, -1) {}

    // 集合の代表を返す
    int find(int x) {
        if (par[x] < 0) return x;
        return par[x] = find(par[x]);
    }
    // x と y が同じ集合に属するかを判別
    bool same(int x, int y) {
        return find(x) == find(y);
    }
    // x が属する集合の大きさを返す
    int size(int x) {
        return -par[find(x)];
    }
    // x と y を結合 (merge した場合に true を返す)
    bool unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return false;
        if (par[px] > par[py]) swap(px, py);
        par[px] += par[py];
        par[py] = px;
        return true;
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    return 0;
}
