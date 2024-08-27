#include<bits/stdc++.h>
using namespace std;

/*

int getKthLargest(vector<int> &arr, int k){

	priority_queue<int,vector<int>,greater<int>> minHeap;

	for( int i = 0 ; i < arr.size() ; i++ ){
		
		int sum = 0;

		for( int j = i ; j < arr.size() ; j++ ){

			sum = sum + arr[j];

			if( minHeap.size() < k ){
				minHeap.push(sum);
            }

           	else if (sum > minHeap.top()) {
        		minHeap.pop();
            	minHeap.push(sum);
            }

    	}

	}

	return minHeap.top();

}

*/