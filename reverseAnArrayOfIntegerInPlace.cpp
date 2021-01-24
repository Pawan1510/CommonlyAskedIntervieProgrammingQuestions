#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int r = n-1;
    int l = 0;

    while( l < r )
    {
        int t = arr[r];
        arr[r] = arr[l];
        arr[l] = t;
        r--;
        l++;
    }

    for( int i=0; i<n; i++ )    cout<<arr[i]<<" ";
}
