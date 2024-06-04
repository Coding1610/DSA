#include<bits/stdc++.h>
using namespace std;

# define MIN(a,b)  (((a)<(b)) ? (a) : (b))
# define MAX(a,b)  (((a)>(b)) ? (a) : (b))

int main(){

    int a = 16;
    int b = 13;
    cout << " MIMIMUM OF " << a << " & " << b << " IS --> " << MIN(a,b);
    cout << endl;
    cout << " MAXIMUM OF " << a << " & " << b << " IS --> " << MAX(a,b);
}


// OBJECT LIKE MACRO :

#  define DATE 16
# define LIMIT 10

int main() {

    cout << " MY BDAY IS AT " 
         << DATE << " OCTOBER ";

    cout << endl;

    cout << " LIMIT IS : "
         << LIMIT ;

}


// CHAIN LIKE MACROS :

# define INSTAGRAM FOLLOWERS 
# define FOLLOWERS 364

int main(){

    cout << " MY INSTAFRAM FOLLOWERS IS : "
         << INSTAGRAM ;
}


// MULTILINE MACROS :

# define PI 3.14
# define AREA(r)  (PI*((r)*(r)))

int main(){

    int r = 5;
    cout << " AREA OF CIRCLE IS : "
         << AREA(r) ;
}


// FUNCTION LIKE MACROS :

# define ELEMENT 1,\
                 2,\
                 3,\
                 4
int main(){

    int arr[] = { ELEMENT };
    for ( int i = 0 ; i < 4 ; i++){
        cout << arr[i] << " ";
    }
}