#include<bits/stdc++.h>
using namespace std;

/*

// Polymorphism : 1. Compile Time Polymorphism ---> Function Overloading

int add(int x , int y , int z = 16 , int w = 14){
    return x+y+z+w ;
}

int main(){

    cout << add(10 , 20) << endl;
    cout << add(12,45,67) << endl;
    cout << add(1,2,3,4) << endl;
    cout << add(0,0) << endl;

}

// Polymorphism : 1. Compile Time Polymorphism ---> Operator Overloading

class B{

    public:

    int a;
    int b;

    public:

    void operator() (){
        cout << "Operator Overloading" << endl;
    }

    void operator* ( B &obj ){
        int value1 = this-> a;
        int value2 = obj.a;
        cout << "ans --> " << value2 + value1 << endl;
        cout << "Multiply nai thay bhai plus thase hoo" << endl;

    }

};

int main(){

    B r1 , r2 ;
    r1.a = 15;
    r2.a = 12;
    r1();
    r1 * r2;
    
}

// Polymorphism : 2. Run Time Polymorphism ---> Function/Method Overriding 

class parent{

    public:
    void show(){
        cout << " INSIDE PARENT CALSS" << endl;
    }

};

class child1 : public parent {

    public:
    void show(){
        cout << " INSIDE CHILD1 CLASS " << endl;

    }

};

class child2 : public parent {

    public:
    void show(){
        cout << " INSIDE CHILD2 CLASS " << endl;
    }

};

int main(){

    child1 c1;
    c1.show();

    child2 c2;
    c2.show();

    parent c3;
    c3.show();
    
}

*/