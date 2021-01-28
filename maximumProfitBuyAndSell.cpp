/*
Stock Buy Sell to Maximize Profit

The cost of a stock on each day is given in an array,
find the max profit that you can make by buying and 
selling in those days. For example, if the given array 
is {100, 180, 260, 310, 40, 535, 695}, the maximum profit 
can earned by buying on day 0, selling on day 3. Again buy
on day 4 and sell on day 6. If the given array of prices is
sorted in decreasing order, then profit cannot be earned at all.

The idea is to find the minimum element in the array and subtract 
with all elements in the array and find the maximum value.

First, we store the first element of the array in a variable. 
Now compare the first element with all the 
the element of the array and find the minimum element. 
Then store the minimum element of the array in that variable. 
Then subtract the minimum element with the entire array and find the
maximum value and then at last return the max value
*/
#include<bits/stdc++.h>
using namespace std;
int maxProfit( int prices[], int n )
{
    int cost = 0, maxCost = 0;
    
    int minPrice = prices[0];
    
    for( int i=0; i<n; i++ ) {
        
        minPrice = min( minPrice, prices[i] );
        cost = prices[i] - minPrice;
        maxCost = max( maxCost ,cost );
        
    }
    return maxCost;
}
int main()
{
    int prices[] = { 7, 1, 5, 3, 6, 4 };
    int n = sizeof(prices) / sizeof(prices[0]);
    int ans = maxProfit( prices, n );
    cout<<ans<<endl;
}
