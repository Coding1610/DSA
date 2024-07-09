#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int calPoints(vector<string>& operations){

        stack<int> record;
        
        for(string& op : operations){

            if(op == "C"){

                if(!record.empty()){
                    record.pop();
                }

            }

            else if(op == "D"){
            
                if(!record.empty()){
                    record.push(2 * record.top());
                }
            }
    
            else if(op == "+"){

                int size = record.size();

                if(size >= 2){
                    int n1 = record.top();
                    record.pop();
                    int n2 = record.top();
                    record.pop();
                    record.push(n2);
                    record.push(n1);
                    record.push(n1+n2);
                }

            }

            else{
                record.push(stoi(op));
            }

        }
        
        int sum = 0;
        while( !record.empty() ){
            sum += record.top();
            record.pop();
        }

        return sum;
    }
};

*/