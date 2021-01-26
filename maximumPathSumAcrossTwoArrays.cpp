/*

Given two sorted arrays, such that the arrays may have some common elements.
Find the sum of the maximum sum path to reach from the beginning of any array
to end of any of the two arrays. We can switch from one array to another array only at common elements. 

Note: The common elements do not have to be at the same indexes.

Expected Time Complexity: O(m+n), where m is the number of elements in ar1[] and n is the number of elements in ar2[].

Examples: 

Input: ar1[] = {2, 3, 7, 10, 12}
       ar2[] = {1, 5, 7, 8}
Output: 35

*/
#include<bits/stdc++.h>
using namespace std;
int maxPathSum( int ar1[], int ar2[], int m, int n )
{
    int i = 0, j = 0;
    int result = 0, sum1 = 0, sum2 = 0;

    while( i<m &&j<n )
    {
        if( ar1[i] < ar2[j] )
            sum1 += ar1[i++];
        else if( ar2[j] < ar1[i] )
            sum2 += ar2[j++];
        else {
            result += max( sum1, sum2 );

            sum1 = 0, sum2 = 0;

            int temp = i;

            while( i < m && ar1[i] == ar2[j] )
                sum1 += ar1[i++];
            while( j < n && ar1[temp] == ar2[j] )
                sum2 += ar2[j++];

            result += max( sum1, sum2 );

            sum1 = 0, sum2 = 0;
        }
    }

    while( i<m )
        sum1 += ar1[i++];
    while( j<n )
        sum2 += ar2[j++];
    result += max( sum1, sum2 );

    return result;

}
int main()
{
    int ar1[] = {2, 3, 7, 10, 12};
    int ar2[] = {1, 5, 7, 8};
    //int ar2[] = { 1, 5, 7, 8, 10, 15, 16, 19 };
    int m = sizeof(ar1)/sizeof(ar1[0]), n = sizeof(ar2)/sizeof(ar2[0]);

    int ans = maxPathSum( ar1,ar2,m,n );

    cout<<ans<<endl;

    return 0;
}
