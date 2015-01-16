/*
 * 10420 - List of Conquests.cpp
 *
 *  Created on: Jan 16, 2015
 *      Author: Mostafa
 */

#include<bits/stdc++.h>

using namespace std; 

int main () {
	int n;
	cin>>n;
	map<string,int> m;

	for(int i=0;i<n;i++) {
		string s;
		cin>>s;
		m[s]++;
		getline(cin,s);
	}
	for(map<string,int>::iterator it=m.begin();it!=m.end();it++) {
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
