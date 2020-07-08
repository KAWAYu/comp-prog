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

class RollingHash {
public:
    static const long long base1 = 1007, base2 = 2009;
    static const long long mod1 = 1000000007, mod2 = 1000000009;
    std::vector<long long> hash1, hash2, pow1, pow2;

    RollingHash(string s) {
        int n = s.size();
        hash1.resize(n + 1, 0), hash2.resize(n + 1, 0);
        pow1.resize(n + 1, 0), pow2.resize(n + 1, 0);
        for (int i = 0; i < n; i++) {
            hash1[i + 1] = (hash1[i] * base1 + s[i]) % mod1;
            hash2[i + 1] = (hash2[i] * base2 + s[i]) % mod2;
            pow1[i + 1] = pow1[i] * base1 % mod1;
            pow2[i + 1] = pow2[i] * base2 % mod2;
        }
    }

    // hash の取得
    inline std::pair<long long, long long> get_hash(int l, int r) const {
        long long ret1 = hash1[r] - hash1[l] * pow1[r - l] % mod1,
                  ret2 = hash2[r] - hash2[l] * pow2[r - l] % mod2;
        if (ret1 < 0) ret1 += mod1;
        if (ret2 < 0) ret2 += mod2;
        return {ret1, ret2};
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    return 0;
}

