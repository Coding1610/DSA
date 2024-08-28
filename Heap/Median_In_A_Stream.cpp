#include<bits/stdc++.h>
using namespace std;

/*

COING NINJAS

Brute Force : T.C = O(N^2*LogN)

vector<int> findMedian(vector<int> &arr, int n){
    
    vector<int> ans;
    vector<int> nums;

    for( int i = 0 ; i < n ; i++ ){

        nums.push_back(arr[i]);

        sort( nums.begin() , nums.end() );

        int n = nums.size();

        if( n%2 != 0 ){
            ans.push_back(nums[n/2]);
        }

        else{
            int n1 = nums[n/2];
            int n2 = nums[n/2-1];
            ans.push_back((n1+n2)/2);
        }

    }

    return ans;

}

*/

/*

CODING NINJAS

Optimal : T.C = O(N*LogN)

int Signum( int a , int b ){

    if( a == b ){
        return 0;
    }

    else if( a > b ){
        return 1;
    }

    else{ 
        return -1;
    }

}

void callMedian( int element , priority_queue<int> &maxheap , priority_queue<int , vector<int> , greater<int>> &minheap , int &median ){

    switch( Signum( maxheap.size() , minheap.size() )){

        case 0 : if( element > median ){
                    minheap.push( element );
                    median = minheap.top();
                }

                else{
                    maxheap.push( element );
                    median = maxheap.top();
                }

                break;

        case 1 : if( element > median ){
                    minheap.push( element );
                    median = ( maxheap.top() + minheap.top() )/2;
                }

                else{
                    minheap.push( maxheap.top() );
                    maxheap.pop();
                    maxheap.push( element );
                    median = ( maxheap.top() + minheap.top() )/2;
                }

                break;

        case -1 : if( element > median ){
                    maxheap.push( minheap.top() );
                    minheap.pop();
                    minheap.push( element );
                    median = ( maxheap.top() + minheap.top() )/2;
                }

                else{
                    maxheap.push( element );
                    median = ( maxheap.top() + minheap.top() )/2;
                }

                break;


    }
}

vector<int> findMedian(vector<int> &arr, int n){

    int median = 0; 
    vector<int> ans;
    priority_queue<int> maxheap;
    priority_queue<int , vector<int> , greater<int>> minheap;
    
    for( int i = 0 ; i < n ; i++ ){
        callMedian( arr[i] , maxheap , minheap , median );
        ans.push_back( median );
    }

    return ans;
    
}

*/

/*

LEETCODE

class MedianFinder {
public:
    
    priority_queue<int> maxHeapForSmallNum;
    priority_queue<int, std::vector<int>, std::greater<int>> minHeapForLargeNum;
    
    MedianFinder() {}

    void addNum(int num) {

        if (maxHeapForSmallNum.empty() || maxHeapForSmallNum.top() >= num) {
            maxHeapForSmallNum.push(num);
        }

        else {
            minHeapForLargeNum.push(num);
        }

        if (maxHeapForSmallNum.size() > minHeapForLargeNum.size() + 1) {
            minHeapForLargeNum.push(maxHeapForSmallNum.top());
            maxHeapForSmallNum.pop();
        } 
        else if (maxHeapForSmallNum.size() < minHeapForLargeNum.size()) {
            maxHeapForSmallNum.push(minHeapForLargeNum.top());
            minHeapForLargeNum.pop();
        }

    }

    double findMedian() {

        if (maxHeapForSmallNum.size() == minHeapForLargeNum.size()) {
            return (maxHeapForSmallNum.top() + minHeapForLargeNum.top())/2.0;
        } 

        else {
            return maxHeapForSmallNum.top();
        }

    }

};


*/