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


int howManyAgentsToAdd(int noOfCurrentAgents, vector < vector<int> > callsTimes) {
	int n = callsTimes.size();

	for (int i = 0; i < n; i++) {

	}

}

vector <int> sort_hotels(string keywords, vector <int> hotel_ids, vector <string> reviews) {
	vector<int> outvec;
	string word;
	int n = hotel_ids.size();
	vector<int> ratings(n);

	for (int i = 0; i < n; i++) {
		stringstream ss(reviews[i]);
		while (ss >> word) {
			transform(word.begin(), word.end(), word.begin(), ::tolower);
			cout << word << " ";
		}
	}

	return outvec;
}



int main() {
	cout << "hello world" << endl;
	return 0;
}