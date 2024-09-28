#include<bits/stdc++.h>
using namespace std;

/*

class MyCalendarTwo {
public:

    vector<pair<int,int>> singleBooking;
    vector<pair<int,int>> doubleBooking;

    MyCalendarTwo(){}
    
    bool book(int start, int end) {

        // Check For 3 Booking
        for( auto it : doubleBooking ){
            if( max( start , it.first ) < min( end , it.second ) ){
                return false;
            } 
        }

        // Check For 2 Booking
        for( auto it : singleBooking ){
            if( max( start , it.first ) < min( end , it.second ) ){
                doubleBooking.push_back( {max( start , it.first ) , min( end , it.second )} );
            }
        }

        singleBooking.push_back({start,end});
        return true;
        
    }
};

*/