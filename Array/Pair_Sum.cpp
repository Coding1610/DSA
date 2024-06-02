#include<bits/stdc++.h>
using namespace std;

/*
int pairSum(vector<int> &arr, int n, int target)
{

	int s = 0;
	int e = n-1;
	int count = 0;

	while( s < e ){

		if( arr[s]+arr[e] == target ){
			s++;
			e--;
			count++;
		}

		else if( target > arr[s]+arr[e] ){
			s++;
		}

		else{
			e--;
		}

	}
	return ( count == 0 ) ? -1 : count;
}
*/