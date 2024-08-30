#include<bits/stdc++.h>
using namespace std;

/*

// Example 1

class Demo{

    int x;
 
    public:
    void set_data(int a) { x = a; }
 
    // non const member function
    // data can be updated
    int get_data(){
        ++x;
        return x;
    }

};
 
int main(){

    Demo d;
    d.set_data(10);
    cout << d.get_data();
 
    return 0;
    // Output = 11

}

// Example 2
 
class Demo{

    int x;
 
    public:
    void set_data(int a) { x = a; }
 
    // constant member function
    int get_data() const{

        // Error while attempting to modify the data
        // member
        ++x;
        return x;

    }

};
 
int main(){

    Demo d;
    d.set_data(10);
    cout << endl << d.get_data();
 
    return 0;

}

// Example 3

class Demo{

    int x;
 
    public:
    void set_data(int);
 
    // const member function
    int get_data() const;

};
 
// Function definition for setting the value of x.
void Demo::set_data(int a) { x = a; }
 
// Function definition for retrieving the value of x (const
// member function).
int Demo::get_data() const { return x; }
 
int main(){

    Demo d;
    // Set the value of x to 10 using the non-const member
    // function.
    d.set_data(10);
    // Print the value of x using the const member function.
    cout << d.get_data();
 
    return 0;
    //Output = 10

}

// Example 4
 
class Test{

    int value;
 
    public:
    Test(int v = 0) { value = v; }
 
    // const member function
    int getValue() const { return value; }

};
 
int main(){

    // non const object
    Test t(20);
    cout << t.getValue();
    return 0;

    // Output = 20
 
}

// Example 4

class Test{

    int value;
    
    public:
    Test(int v = 0) { value = v; }
 
    // non const member function
    int getValue() { return value; }

};
 
int main(){

    // const object
    const Test t;
    cout << t.getValue();
    return 0;
    
}

// Example 5

class Demo {

    int value;
 
    public:
    Demo(int v = 0){ 
        value = v; 
    }

    void showMessage(){

        cout << "Hello World We are Tushar, "
                "Ramswarup, Nilesh and Subhash Inside"
                " showMessage() Function"
             << endl;

    }
 
    // const member function
    void display() const{

        cout << "Hello world I'm Rancho "
                "Baba Inside display() Function"
             << endl;
    }

};

int main(){

    // Constant object are initialised at the time of
    // declaration using constructor
    const Demo d1;
    // d1.showMessage();Error occurred if uncomment.
    d1.display();
    return (0);

    //Output = Hello world I'm Rancho Baba Inside display() Function
}

*/