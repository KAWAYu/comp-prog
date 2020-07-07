#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys

# 再帰の深さ変更：適宜設定してください
sys.setrecursionlimit(1000000)
# 入力高速化
input = sys.stdin.readline
input_lines = sys.stdin.readlines


# Python3: verified at https://judge.yosupo.jp/submission/14945
# PyPy3: verified at https://judge.yosupo.jp/submission/14946
class UnionFind(object):
    def __init__(self, n):
        self.n = n
        self.par = [-1] * n
    
    def find(self, x):
        if self.par[x] < 0:
            return x
        self.par[x] = self.find(self.par[x])
        return self.par[x]

    def size(self, x):
        return -self.par(x)

    def same(self, x, y):
        return self.find(x) == self.find(y)
    
    def unite(self, x, y):
        px, py = self.find(x), self.find(y)
        if px == py:
            return False
        if self.par[px] > self.par[py]:
            px, py = py, px
        self.par[px] += self.par[py]
        self.par[py] = px
        return True


def main():
    pass


if __name__ == "__main__":
    main()
