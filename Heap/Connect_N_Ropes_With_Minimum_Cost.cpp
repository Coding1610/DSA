#include<bits/stdc++.h>
using namespace std;

/*

long long connectRopes(int* arr, int n){

    long long int minSum;

	priority_queue<int,vector<int>,greater<int>> minHeap;

	for( int i = 0 ; i < n ; i++ ){
		minHeap.push(arr[i]);
	}

	while( minHeap.size() > 1 ){

		int num1 = minHeap.top();
		minHeap.pop();

		int num2 = minHeap.top();
		minHeap.pop();

		long long int sum = num1+num2;
		minSum += sum;

		minHeap.push(sum);

	}

	return minSum;

}

*/