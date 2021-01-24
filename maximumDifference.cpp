/*
Given an array arr[], find the maximum j – i such that arr[j] > arr[i]

To solve this problem, we need to get two optimum indexes of arr[]: left index i and right index j.
For an element arr[i], we do not need to consider arr[i] for left index if there is an element smaller 
than arr[i] on left side of arr[i]. Similarly, if there is a greater element on right side of arr[j] 
then we do not need to consider this j for right index. So we construct two auxiliary arrays LMin[]
and RMax[] such that LMin[i] holds the smallest element on left side of arr[i] including arr[i], and 
RMax[j] holds the greatest element on right side of arr[j] including arr[j]. After constructing these
two auxiliary arrays, we traverse both of these arrays from left to right. While traversing LMin[] and RMa[] 
if we see that LMin[i] is greater than RMax[j], then we must move ahead in LMin[] (or do i++) because all 
elements on left of LMin[i] are greater than or equal to LMin[i]. Otherwise we must move ahead in RMax[j]
to look for a greater j – i value.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9, 2, 3, 4, 5, 6, 7, 8, 18, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> Lmin(n), RMax(n);

    Lmin[0] = arr[0];
    for( int i=1; i<n; i++ )
        Lmin[i] = min( arr[i], Lmin[i-1] );

    RMax[n-1] = arr[n-1];
    for( int i=n-1; i>=0; i-- )
        RMax[i] = max( arr[i], RMax[i+1] );

    int maxDiff = -1, i =0, j = 0;

    while( j<n && i<n )
    {
        if( Lmin[i] < RMax[j] ) {
            maxDiff = max( maxDiff, j-i );
            j = j+1;
        }
        else
            i = i+1;
    }
    cout<<maxDiff<<endl;
}
