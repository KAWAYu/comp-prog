#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys

# 再帰の深さ変更：適宜設定してください
sys.setrecursionlimit(1000000)
# 入力高速化
input = sys.stdin.readline
input_lines = sys.stdin.readlines

class RollingHash(object):
    def __init__(self, s):
        self.base1 = 1007
        self.base2 = 2009
        self.mod1 = 1000000007
        self.mod2 = 1000000009
        self.hash1, self.hash2 = [0] * (len(s) + 1), [0] * (len(s) + 1)
        self.pow1, self.pow2 = [0] * (len(s) + 1), [0] * (len(s) + 1)
        for i in range(len(s)):
            self.hash1[i + 1] = (self.hash1[i] * self.base1 + ord(s[i])) % self.mod1
            self.hash2[i + 1] = (self.hash2[i] * self.base2 + ord(s[i])) % self.mod2
            self.pow1[i + 1] = self.pow1[i] * self.base1 % self.mod1
            self.pow2[i + 1] = self.pow2[i] * self.base2 % self.mod2
    
    def get_hash(self, l, r):
        ret1 = (self.hash1[r] - self.hash1[l] * self.pow1[r - l] % self.mod1) % self.mod1
        ret2 = (self.hash2[r] - self.hash2[l] * self.pow2[r - l] % self.mod2) % self.mod2
        return ret1, ret2


def main():
    pass


if __name__ == "__main__":
    main()
