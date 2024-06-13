#include<bits/stdc++.h>
using namespace std;

void reachhome(int step , int dest){

    cout << " step " << step << " " << " dest " << dest << endl;

    // Base Case
    if( step == dest){
        cout << " i am at home " << endl; 
        return;                                                                                     
    }

    step++;

    // Recursion Call
    reachhome( step , dest);
}

int main(){

    int dest ;
    cout << "Enter Your Destination : ";
    cin >> dest;

    int step ;
    cout << "Enter Your Steps : ";
    cin >> step;

    reachhome( step , dest );
}