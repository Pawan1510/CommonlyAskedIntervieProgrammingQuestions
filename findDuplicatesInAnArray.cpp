#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {4, 2, 4, 5, 2, 3, 1};
    int n = a.size();
    vector<int> temp(n,0);
    for( int i=0; i<n; i++ ) {
        if( temp[ a[i] ] == 1 ) {
            cout<<a[i]<<" ";
        }
        else {
            temp[ a[i] ]++;
        }
    }
    /*
    vector<int> a = {4, 2, 4, 5, 2, 3, 1};
    int n = a.size();

    map<int,int> mp;
    for( int i=0; i<n; i++ ) {
         mp[ a[i] ]++;
    }

    for( auto itr=mp.begin(); itr!=mp.end(); itr++ ) {
        if( itr->second > 1 ) {
            cout<<itr->first<<" ";
        }
    }
    */
}
