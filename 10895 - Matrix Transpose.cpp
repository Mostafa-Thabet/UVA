/*
 * 10895 - Matrix Transpose.cpp
 *
 *  Created on: Feb 13, 2015
 *      Author: Mostafa
 */
 
#include<bits/stdc++.h>
 
using namespace std;
 
int m, n;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
 
 
int main() {
    while (cin >> m >> n) {
        vector<vii> v;
        v.resize(m);
        int r = 0;
        int maxr = -1;
        for (int i = 0; i < m; i++) {
            cin >> r;
            maxr = max(maxr, r);
            if (r == 0) {
                ii temp;
                temp.first = 0, temp.second = 0;
                v[i].push_back(temp);
            }
            for (int j = 0; j < r; j++) {
                ii x;
                cin >> x.first;
                v[i].push_back(x);
            }
            for (int j = 0; j < r; j++) {
                int x;
                cin >> x;
                v[i][j].second = x;
            }
        }
 
        /*
         for(int i=0;i<m;i++) {
         for(int j=0;j<v[i].size();j++) {
         cout<<v[i][j].first<<" "<<v[i][j].second<<" ";
         }
         cout<<endl;
 
         }
         */
 
        int c = v[0][0].first;
        cout << n << " " << m << endl;
        for (int i = 0; i < n; i++) {
            int r = 0;
            vii v2;
            for (int j = 0; j < m; j++) {
                if (v[j][0].first == c) {
                    //cout<<v[j][0].first<<" "<<v[j][0].second<<" >> ";
                    r++;
                    ii temp;
                    temp.first = j + 1;
                    temp.second = v[j][0].second;
                    v2.push_back(temp);
                    //cout<<v2[v2.size()-1].first<<" "<<v2[v2.size()-1].second<<" ";
                    v[j].erase(v[j].begin());
                }
            }
            cout << r ;
            for (int j = 0; j < (int) v2.size(); j++) {
                cout <<" "<< v2[j].first ;
            }
            cout << endl;
            for (int j = 0; j < (int) v2.size(); j++) {
                if(j)cout<<" ";
                cout << v2[j].second ;
            }
            cout << endl;
            c++;
        }
    }
 
    return 0;
}
