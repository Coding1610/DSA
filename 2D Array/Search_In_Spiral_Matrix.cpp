#include<bits/stdc++.h>
using namespace std;

/*
int findKthElement(vector<vector<int>> matrix, int k) {    
 
    int m = matrix.size(); 
    int n = matrix[0].size();   

    vector<int>ans;   

    int l = 0;
    int u = 0;
    int r = n-1;
    int d = m-1;

   while( ans.size() != k ){      

        for(int i = l; i<=r && ans.size() < k; i++){            
            ans.push_back(matrix[l][i]);      
        }

        for(int i = u+1; i<=d-1 && ans.size() < k; i++){        
            ans.push_back(matrix[i][r]);     
        }

        for(int i = r; i >= l && ans.size() < k; i--){           
           ans.push_back(matrix[d][i]);       
        }

        for(int i = d-1; i>=u+1 && ans.size() < k; i--){           
           ans.push_back(matrix[i][l]);      
        }

        l++;
        u++;
        r--; 
        d--;  
    }        
    return ans.back();
}
*/