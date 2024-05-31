#include<bits/stdc++.h>
using namespace std;

/*

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	sort(arr.begin() , arr.end());
	bool found = false;
	vector<pair<int,int>> ans;
	int i = 0;
	int j = n-1;
	int sum = 0;

	while( i < j )  {
		sum = arr[i] + arr[j];
		if( sum < target ){
			i++;
		}
		else if( sum > target ){
			j--;
		}
		else if( sum == target ){
			ans.push_back({arr[i],arr[j]});
			i++;
			j--;
			found = true;
		}
	}
    if (found == false) {
        ans.push_back({-1,-1});
    }
	return ans;
}

*/