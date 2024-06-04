#include<bits/stdc++.h>
using namespace std;

//1st

    // Driver Code
    int main()
    {
        // const int x;  CTE error
        // x = 9;   CTE error
        const int y = 10;
        cout << y;
 
        return 0;

        // ANS = 10
    }

//2nd

//When the pointer variable point to a const value:
//Syntax: 

// [const data_type* var_name;]

    // Driver Code
    int main()
    {
        int x{ 10 };
        char y{ 'M' };
 
        const int* i = &x;
        const char* j = &y;
 
        // Value of x and y can be altered,
        // they are not constant variables
        x = 9;
        y = 'A';
 
        // Change of constant values because,
        // i and j are pointing to const-int
        // & const-char type value
        // *i = 6;
        // *j = 7;
 
        cout << *i << " " << *j;

        // ANS = 9 A
    }

//3rd

//When the const pointer variable point to the value:
//Syntax:

// [data_type* const var_name;]
 
    // Driver Code
    int main()
    {
        // x and z non-const var
        int x = 5;
        int z = 6;
 
        // y and p non-const var
        char y = 'A';
        char p = 'C';
 
        // const pointer(i) pointing
        // to the var x's location
        int* const i = &x;
 
        // const pointer(j) pointing
        // to the var y's location
        char* const j = &y;
 
 
        // The values that is stored at the memory location can modified
        // even if we modify it through the pointer itself
        // No CTE error
        *i = 10;
        *j = 'D';
 
        // CTE because pointer variable
        // is const type so the address
        // pointed by the pointer variables
        // can't be changed
        // i = &z;
        // j = &p;
 
        cout << *i << " and " << *j
            << endl;
        cout << i << " and " << j;
 
        return 0;

        // ANS = 10 and D
    }

//4th

//When const pointer pointing to a const variable:
//Syntax:

// [const data_type* const var_name;]

    // Driver code
    int main()
    {
        int x{ 9 };
 
        const int* const i = &x;
   
        // *i=10;  
        // The above statement will give CTE
        // Once Ptr(*i) value is
        // assigned, later it can't
        // be modified(Error)
 
        char y{ 'A' };
 
        const char* const j = &y;
   
        // *j='B';
        // The above statement will give CTE
        // Once Ptr(*j) value is
        // assigned, later it can't
        // be modified(Error)
 
        cout << *i << " and " << *j;
 
        return 0;

        // ANS = 9 and A 
    }

// 5th

    //[const Class_Name Object_name;]

        // Class Test
    class Test {
        int value;
 
    public:
        // Constructor
        Test(int v = 0)
        {
            value = v;
        }
 
        // We get compiler error if we
        // add a line like "value = 100;"
        // in this function.
        int getValue() const
        {
            return value;
        }
     
        // a nonconst function trying to modify value
        void setValue(int val) {
            value = val;
        }
    };
 
    // Driver Code
    int main()
    {
        // Object of the class T
        Test t(20);
 
        // non-const object invoking const function, no error
        cout << t.getValue() << endl;
     
        // const object
        const Test t_const(10);
   
        // const object invoking const function, no error
        cout << t_const.getValue() << endl;
   
        // const object invoking non-const function, CTE
        // t_const.setValue(15);
     
        // non-const object invoking non-const function, no error
        t.setValue(12);
     
        cout << t.getValue() << endl;
 
        return 0;

        // ANS = 20
    }

//6th

    // Function foo() with variable
    // const int
    void foo(const int y)
    {
        // y = 6; const value
        // can't be change
        cout << y;  
    }
 
    // Function foo() with variable int
    void foo1(int y)
    {
        // Non-const value can be change
        y = 5;
        cout << '\n'
             << y;
    }
 
    // Driver Code
    int main()
    {
        int x = 9;
        const int z = 10;
   
        foo(z);
        foo1(x);
 
        return 0;

        // ANS = 10 OR 5
    }
