/*

Given an unsorted array of size n. Array elements are in the range from 1 to n.
One number from set {1, 2, …n} is missing and one number occurs twice in the array.
Find these two numbers.

Examples: 

 Input: arr[] = {3, 1, 3}
Output: Missing = 2, Repeating = 3

Explanation: In the array, 
2 is missing and 3 occurs twice 

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 1, 2, 4, 5, 1, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);

    map<int,int> m;
    for( int i=0; i<n; i++ )
        m[ arr[i] ]++;

    map<int,int>::iterator itr;
    cout<<"Repeating: ";
    for( itr=m.begin(); itr!=m.end(); itr++ ) {
        if( itr->second > 1 )
            cout<<itr->first<<" ";
    }
    cout<<"\nMissing: ";
    for( int i=1; i<n; i++ ) {
        if( m.find(i) == m.end() )
            cout<<i<<" ";
    }
}
