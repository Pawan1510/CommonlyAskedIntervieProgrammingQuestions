// Using MinHeap to find Kth Smallest element in an array with
// TimeComplexity: O( k + (n-k)*log k )
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Using MIN HEAP
    
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 4;

    priority_queue<int, vector<int>, greater<int> > minHeap;

    for( int i=0; i<n; i++ ) {
        minHeap.push( arr[i] );
    }
    int j = 1;
    while( j < k  ) {
        minHeap.pop();
        j++;
    }
    cout<<minHeap.top();
    
    // Using MAX HEAP
    /*
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 4;

    priority_queue<int> maxHeap;
    for( int i=0; i<n; i++ ) {

        maxHeap.push( arr[i] );

        if( maxHeap.size() > k ) {
            maxHeap.pop();
        }
    }

    cout<<maxHeap.top()<<endl;
    */
}
