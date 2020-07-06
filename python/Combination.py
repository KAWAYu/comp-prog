#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys

# 再帰の深さ変更：適宜設定してください
sys.setrecursionlimit(1000000)
# 入力高速化
input = sys.stdin.readline
input_lines = sys.stdin.readlines

MOD = 1000000007
INF = 1000000000
HIGHINF = 1000000000000000000


class ModInt(object):
    def __init__(self, x):
        self.x = (x + MOD) % MOD
    
    def __iadd__(self, other):
        self.x = self.x + other.x
        if self.x >= MOD:
            self.x -= MOD
        return self
    
    def __isub__(self, other):
        self.x = self.x - other.x
        if self.x < 0:
            self.x += MOD
        return self
    
    def __imul__(self, other):
        self.x = self.x * other.x % MOD
        return self
    
    def __itruediv__(self, other):
        raise NotImplementedError("`/` is not difined")
    
    def __ifloordiv__(self, other):
        self.x = self.x * pow(other.x, MOD - 2, MOD)
        return self
    
    def __add__(self, other):
        tmp = ModInt(self.x)
        tmp += other
        return tmp
    
    def __sub__(self, other):
        tmp = ModInt(self.x)
        tmp -= other
        return tmp
    
    def __mul__(self, other):
        tmp = ModInt(self.x)
        tmp *= other
        return tmp
    
    def __floordiv__(self, other):
        tmp = ModInt(self.x)
        tmp //= other
        return tmp
    
    def __str__(self):
        return str(self.x)
    
    def __repr__(self):
        return repr(self.x)
    
    def __eq__(self, other):
        return self.x == other.x
    
    def __ne__(self, other):
        return self.x != other.x


# Python3 verified at https://atcoder.jp/contests/abc021/submissions/15053688
# PyPy3 verified at https://atcoder.jp/contests/abc021/submissions/15053695
class Combination(object):
    def __init__(self, maxn):
        self.n = maxn
        self.fac = [ModInt(0)] * (maxn + 1)
        self.invfac = [ModInt(0)] * (maxn + 1)
        self.fac[0] = ModInt(1)
        self.fac[1] = ModInt(1)
        self.invfac[0] = ModInt(1)
        self.invfac[1] = ModInt(1)
        for i in range(2, maxn + 1):
            self.fac[i] = self.fac[i - 1] * ModInt(i)
            self.invfac[i] = self.invfac[i - 1] * ModInt(pow(i, MOD - 2, MOD))
    
    # nCr = n! / r!(n-r)!
    def nCr(self, n, r):
        if n < 0 or r < 0 or n < r:
            return ModInt(0)
        return self.fac[n] * self.invfac[r] * self.invfac[n - r]
    
    # 重複組み合わせ nHr = (n + r - 1)C(r - 1)
    def nHr(self, n, r):
        return self.nCr(n + r - 1, r)


def main():
    pass


if __name__ == "__main__":
    main()
