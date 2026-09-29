// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/cpp-input-and-output/problem?isFullScreen=true
// Problem     Input and Output
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-29, 02:45 p.m.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int a, int b, int c){
    return a+b+c;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
        int result = sum(a,b,c);
    cout << result;
    return 0;
}
