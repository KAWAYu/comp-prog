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

// 色々な問題で verify しました。多分大丈夫です。
class ModInt {
public:
    long long x;
    constexpr ModInt(const long long x=0) : x((x+MOD)%MOD) {}
    constexpr ModInt& operator+=(const ModInt rhs) {
        x += rhs.x;
        if (x >= MOD) x -= MOD;
        return *this;
    }
    constexpr ModInt operator+(const ModInt rhs) const {
        return ModInt(*this) += rhs; 
    }
    constexpr ModInt& operator-=(const ModInt& rhs) {
        x -= rhs.x;
        if (x < 0) x += MOD;
        return *this;
    }
    constexpr ModInt operator-(const ModInt rhs) const {
        return ModInt(*this) -= rhs; 
    }
    constexpr ModInt& operator*=(const ModInt& rhs) {
        x = x * rhs.x % MOD;
        return *this;
    }
    constexpr ModInt operator*(const ModInt rhs) const {
        return ModInt(*this) *= rhs; 
    }
    constexpr ModInt& operator/=(const ModInt& rhs) {
        ModInt div = powmod(rhs, MOD - 2);
        (x *= div.x) %= MOD;
        return *this;
    }
    constexpr ModInt operator/(const ModInt rhs) const {
        return ModInt(*this) /= rhs;
    }
    constexpr ModInt powmod(ModInt m, long long p) {
        if (p == 0) return ModInt(1);
        ModInt tmp = powmod(m, p / 2);
        if (p & 1) return tmp * tmp * m;
        else return tmp * tmp;
    }
    constexpr ModInt& operator++() {
        x += 1;
        return *this;
    }
    constexpr ModInt operator++(int) {
        ModInt tmp(*this);
        operator++();
        return tmp;
    }
    constexpr ModInt& operator--() {
        x -= 1;
        return *this;
    }
    constexpr ModInt operator--(int) {
        ModInt tmp(*this);
        operator--();
        return tmp;
    }

    friend ostream& operator<<(ostream& os, const ModInt &rhs) {
        os << rhs.x;
        return os;
    }
    friend istream& operator>>(istream& is, ModInt& rhs) {
        is >> rhs.x;
        return is;
    }
};
bool operator==(const ModInt& lhs, const ModInt& rhs) {
    return lhs.x == rhs.x;
}
bool operator!=(const ModInt& lhs, const ModInt& rhs) {
    return !(lhs == rhs);
}
ModInt powmod(ModInt m, long long p) {
    if (p == 0) return ModInt(1);
    ModInt tmp = powmod(m, p / 2);
    if (p & 1) return tmp * tmp * m;
    else return tmp * tmp;
}

using modi = ModInt;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    return 0;
}
