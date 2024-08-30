#include<bits/stdc++.h>
using namespace std;

// TOPIC 1 : ENCAPSULATION 

/*
    class student {

        private :

        string name ;
        int age ;
        float height ;

        public :

        int getAge(){
            return this -> age;
        }
    };

    int main(){

        cout << "IN ENCAPSULATION ALL THE DATA MEMBER OF THA CLASS ARE PRIVATE" << endl;

    }
*/

// TOPIC 2 : INHERITANCE 

/*
    class Human{

        public:

        int height;
        int weight;
        int age;

        public:

        int getAge(){
            return age;
        }
        int getHeight(){
            return height;
        }
        int getWeight(){
            return weight;
        }

        void setAge(int a){
            this -> age = a;
        }
        void setHeight(int h){
            this -> height = h;
        }
        void setWeight(int w){
            this -> weight = w;
        }

    };

class Male : public Human {

    public:
    string colour;

    void sleep(){
        cout << "MALE SLEEPING" << endl;
    }

};

int main(){

    Male m1;

    m1.setAge(18);
    m1.setHeight(6);
    m1.setWeight(55);

    cout << "AGE : " << m1.age << endl;
    cout << "HEIGHT : " << m1.height << endl;
    cout << "WEIGHT : " << m1.weight << endl;

    m1.sleep();

}

*/