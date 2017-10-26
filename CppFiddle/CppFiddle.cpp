// CppFiddle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <climits>
#include <sstream>
//#include <bits/stdc++.h>
using namespace std;


void stockpurchase() {

	long int n, q, x, a, sep = 1, sepnum = 0, start;
	cin >> n;
	vector <long int> A(n);

	long int tmplength = (n / 10) + 1, tmpmin = LONG_MAX;
	vector<long int> minA;

	for (int i = 0; i<n; i++) {
		cin >> a;
		A[i] = a;
		if (a < tmpmin) {
			tmpmin = a;
		}
		if (sep >= tmplength) {
			minA.push_back(tmpmin);
			tmpmin = LONG_MAX;
			sepnum++;
			sep = 1;
		}
		else {
			sep++;
		}
	}
	if (tmpmin < LONG_MAX) {
		minA.push_back(tmpmin);
		sepnum++;
	}
	cin >> q;
	for (int i = 0; i<q; i++) {
		cin >> x;
		long int m = -1;
		for (int j = sepnum - 1; j>-1; j--) {
			if (x >= minA[j]) {
				m = j;
				break;
			}
		}
		if (m == -1) {
			cout << -1 << endl;
			continue;
		}
		start = (m + 1)*tmplength - 1<n - 1 ? (m + 1)*tmplength - 1 : n - 1;
		for (int j = start; j>-1; j--) {
			if (A[j] <= x) {
				cout << j + 1 << endl;
				break;
			}
		}
	}
}



int main() {
	stockpurchase();
	return 0;
}
