#include<bits/stdc++.h>
using namespace std;

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {

        vector<vector<int>> matrix(m,vector<int>(n,-1));
        int row = m;
        int col = n;
        int sr = 0;
        int sc = 0;
        int er = row-1;
        int ec = col-1;
        int count = 0;
        int total = m*n;

        while( head != NULL ){

            // Starting Row
            for( int i = sc ; i <= ec && head != NULL ; i++ ){
                matrix[sr][i] = head -> val;
                head = head -> next;
            }
            sr++;

            // Ending Column
            for( int i = sr ; i <= er && head != NULL ; i++ ){
                matrix[i][ec] = head -> val;
                head = head -> next;
            }
            ec--;

            // Ending Row
            for( int i = ec ; i >= sc && head != NULL ; i-- ){
                matrix[er][i] = head -> val;
                head = head -> next;
            }
            er--;

            // Starting Column
            for( int i = er ; i >= sr && head != NULL ; i-- ){
                matrix[i][sc] = head -> val;
                head = head -> next;
            }
            sc++;
        }

        return matrix;
        
    }
};
*/