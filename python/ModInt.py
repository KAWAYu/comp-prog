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
        return self.x
    
    def __isub__(self, other):
        self.x = self.x - other.x
        if self.x < 0:
            self.x += MOD
        return self.x
    
    def __imul__(self, other):
        self.x = self.x * other.x % MOD
        return self.x
    
    def __itruediv__(self, other):
        raise NotImplementedError("`/` is not difined")
    
    def __ifloordiv__(self, other):
        return self.x * pow(other.x, MOD - 2, MOD)
    
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


def main():
    pass


if __name__ == "__main__":
    main()
