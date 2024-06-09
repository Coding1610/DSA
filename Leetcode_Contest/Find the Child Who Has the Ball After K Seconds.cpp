#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int numberOfChild(int n, int k) {

        if (n == 1) return 0; 

        int position = 0;
        int direction = 1; 

        for (int i = 0; i < k; ++i) {
            position += direction;
            if (position == 0 || position == n - 1) {
                direction = -direction;
            }
        }
        return position;
    }
};
*/