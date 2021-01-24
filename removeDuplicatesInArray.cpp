// Remove Duplicates in an array
// Time Complexity: O( n );
// Space Complexity: O( 1 );
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates( int arr[], int n )
{
    int index = 1;
    for( int i = 0; i<n-1; i++ ) {
        if( arr[i] != arr[i+1] )
            arr[index++] = arr[i+1];
    }
    return index;
}
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof( arr )/sizeof( arr[0] );

    n = removeDuplicates( arr, n );

    for( int i =0; i<n; i++ )
        cout<<arr[i]<<" ";
}
/*
// Remove Duplicates from an Unsorted Array
// Using Map
//TimeComplexity: O( n )
#include<bits/stdc++.h>
using namespace std;
void removeDuplicates( int arr[], int n )
{
    map<int,bool> m;
    for( int i=0; i<n; i++ ) {
        if( m.find(arr[i]) == m.end() )
            cout<<arr[i]<<" ";
        m.insert({arr[i],true});
    }
}
int main()
{
    int arr[] = { 1, 2, 5, 1, 7, 2, 4, 2 };;
    int n = sizeof(arr)/sizeof(arr[0]);

    removeDuplicates(arr,n);
}

*/
