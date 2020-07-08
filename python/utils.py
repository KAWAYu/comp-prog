#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys

# 再帰の深さ変更：適宜設定してください
sys.setrecursionlimit(1000000)
# 入力高速化
input = sys.stdin.readline
input_lines = sys.stdin.readlines

# ユークリッドの互除法で最大公約数を求める
def gcd(a, b):
    s, t = a, b
    while t != 0:
        u = s % t
        s, t = t, u
    return s


def lcm(a, b):
    return a // gcd(a, b) * b


def main():
    pass


if __name__ == "__main__":
    main()
