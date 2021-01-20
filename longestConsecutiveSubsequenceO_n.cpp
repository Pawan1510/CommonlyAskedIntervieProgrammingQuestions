//longest consecutive subsequence
//Time Complexity O( n )
#include<bits/stdc++.h>
using namespace std;
int fun( vector<int>& A )
{
    int ans = 0;
    
    unordered_set<int> s;
    
    for( int i=0; i<A.size(); i++ )
        s.insert( A[i] );
    
    for( int i=0; i<A.size(); i++ ) {
        
        if( s.find( A[i]-1 ) == s.end() ) {
            
            int j = A[i];
            
            while( s.find( j ) != s.end() )
                j++;
            
            ans = max( ans, j-A[i] );
        }
    }
    
    return ans;
}

int main()
{
    vector<int> array = { 1, 4, 2, 3, 9, 6, 8, 7, 10 };
    int ans = fun( array );
    cout<<ans<<endl;
}
