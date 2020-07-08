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

// ユークリッドの互除法で最大公約数を求める
template <typename T>
T gcd(T a, T b) {
    T s = a, t = b;
    while (t != 0) {
        T u = s % t;
        s = t;
        t = u;
    }
    return s;
}

// 最小公倍数 lcm を求める
template <typename T>
T lcm(T a, T b) {
    return a / gcd(a, b) * b;
}

// 二分累乗法で m^p を求める
// MOD による余りをとる実装になっているので注意
long long powmod(long long m, long long p) {
    ll ret = 1;
    while (p > 0) {
        if (p & 1) ret = ret * m % MOD;
        m = m * m % MOD;
        p >>= 1;
    }
    return ret;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    return 0;
}

