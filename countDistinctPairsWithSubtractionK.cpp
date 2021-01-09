//Count number of pairs of a given array whose difference equals to k
#include<bits/stdc++.h>
using namespace std;
int countPairs( int arr[], int n, int k )
{
    map<int, int> mp;
    int count = 0;
    for( int i=0; i<n; i++ ) {
        if( mp.find( arr[i] ) == mp.end() ) {
            mp.insert( { arr[i],1 } );
        }
    }
    /*map<int,int>::iterator itr;
    for( itr=mp.begin(); itr!=mp.end(); itr++ ) {
        cout<<itr->first<<" "<<itr->second<<endl;
    }*/
    for( int i=0; i<n; i++ ) {
        if( mp.find( arr[i] + k ) != mp.end() )
            count++;
        if( mp.find( arr[i] - k ) != mp.end() )
            count++;
        mp.erase( arr[i] );
    }
    return count;
}
int main()
{
    int arr[] = {8, 12, 16, 4, 0, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int pairs = countPairs( arr, n, k );
    cout<<pairs<<endl;
}
