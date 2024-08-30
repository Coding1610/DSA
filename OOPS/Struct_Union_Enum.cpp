#include<bits/stdc++.h>
using namespace std;

/*

// Structure is user define Datatye in which you store multiple type of DataType ::

// 1st Syntax 

/*
struct Racer{

    int Carno;
    char Carname;
    float Carmoney;

};

int main(){

    Racer Yash;
    Yash.Carno = 95;
    Yash.Carname = 'L';
    Yash.Carmoney = 70000000;

    cout << " CAR NO IS : " << Yash.Carno << endl;
    cout << " CAR NAME IS : " << Yash.Carname << endl;
    cout << " CAR MONEY IS : " << Yash.Carmoney << endl;
}

// 2nd Syntax :

typedef struct Racer{

    int Carno;
    char Carname;
    float Carmoney;

} r1 ;

int main(){

    r1 Yash;
    Yash.Carno = 95;
    Yash.Carname = 'L';
    Yash.Carmoney = 70000000;

    cout << " CAR NO IS : " << Yash.Carno << endl;
    cout << " CAR NAME IS : " << Yash.Carname << endl;
    cout << " CAR MONEY IS : " << Yash.Carmoney << endl;
}

// Union : In union we can only access one datatype or one argyument ::

union Car{

    int carno;
    char carname;
    float carmoney;

};

int main(){

    Car c1;
    c1.carno = 95;
    cout << " car no is : " << c1.carno << endl; // 95
    c1.carname = 'Y';
    cout << " car no is : " << c1.carno << endl; // Garbedge value 
    cout << " car char is : " << c1.carname << endl; // Y
    c1.carmoney = 6.5;
    cout << " car char is : " << c1.carname << endl; // Garbedge value
    cout << " car money is : " << c1.carmoney << " crore" <<  endl; // 6.5 crore
}

// Enums : Make  program more readable and enum gives fix value , In enum you can not change fix values and u try to change then it also return fix values ::

int main(){

    enum Meal { breakfast , lunch , snaks , dinner };
    Meal m1 = breakfast;

    cout << m1 << " ";
    cout << (m1 == 2) << " "; 
    cout << breakfast << " ";
    cout << lunch << " ";
    cout << snaks << " ";
    cout << dinner << " ";
}

*/