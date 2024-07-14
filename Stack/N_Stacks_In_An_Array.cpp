#include <bits/stdc++.h> 
using namespace std;

/*

class NStack
{
    int *arr;
    int *top;
    int *next;
    int n, s;
    int freespot;
    
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        
        // Top Initialise
        for(int i=0; i<n; i++) {
            top[i] = -1;
        }
        
        // Next Initialise
        for(int i=0; i<s; i++) {
            next[i] = i+1;
        }

        // Update Last Index Value To -1
        next[s-1] = -1;
        
        // Initialise Freespot
        freespot = 0;
        
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Check For Overflow
        if(freespot == -1) {
            return false;
        }
        
        // Find Index
        int index = freespot;
        
        // Insert Element Into Array
        arr[index] = x;
        
        // Update Freespot
        freespot = next[index];
       
        // Update Next;
        next[index] = top[m-1];
        
        // Update Top
        top[m-1] = index;
        
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Check Underflow Condition
        if(top[m-1] == -1) {
            return -1;
        }
        
        // Find Index
        int index= top[m-1];
        
        // Update Top;
        top[m-1] = next[index];
        
        // Update Next
        next[index] = freespot;
        
        // Update Freeslot
        freespot = index;
        
        // Return Value
        return arr[index];
    }
};

*/