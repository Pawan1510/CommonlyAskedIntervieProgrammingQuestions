//longest consecutive subsequence
//Time Complexity O( nlogn )
#include<bits/stdc++.h>
using namespace std;
int fun( vector<int>& A )
{
    int ans = 0, count = 0;
    
    sort(A.begin(),A.end());
    
    vector<int> v;
    
    v.push_back(A[0]);
    
    for( int i=1; i<A.size(); i++ ) {
        
        if( A[i] != A[i-1] )
            v.push_back( A[i] );
            
    }
    
    for( int i=0; i<v.size(); i++ )
    {
        if( v[i] == v[i-1]+1 )
            count++;
        else
            count = 1;
        ans = max(ans,count);
    }
    return ans;
}

int main()
{
    vector<int> array = { 1, 4, 2, 3, 9, 6, 8, 7, 10 };
    int ans = fun( array );
    cout<<ans<<endl;
}
