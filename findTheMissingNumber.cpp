#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1,2,3,5};
    int n = 4;
    int total = ( n + 1 )*( n + 2 )/2;
    for( int i=0; i<n; i++ ) {
        total -= a[i];
    }
    cout<<total<<endl;
    /*
    int a[] = { 1,2,4,3,6 };
    int n = 5, total = 1;
    for( int i=2; i<= (n+1); i++ ) {
        total += i;
        total -= a[i-2];
    }
    cout<<total;
    */
}
