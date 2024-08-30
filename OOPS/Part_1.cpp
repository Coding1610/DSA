#include<bits/stdc++.h>
using namespace std;

/*
    class Hero {

        private:
        // properties
        int luckynumber;

        // how to access private properties || public ke niche bhi access ho sakta hai 
        void print(){
            cout << "YASH KA LUCKY NUMBER HAI : " << luckynumber << endl; 
        } 

        public:
        // properties
        int score;
        char health;
        char *name;
        static int timeToCompelete;  

        void printt(){

            cout << endl;
            cout << "[NAME: " << name << " , " ;
            cout << "SCORE: " << score << " , " ;
            cout << "HEALTH: " << health << "]" << endl;
            cout << endl;
        } 

        // constructor creation
        Hero(){
            cout << " WHEN OBJEECT CREATE THEN CONTRUCTOR CALL " << endl;
            name = new char[100];
            cout << endl;
        }

        // parametrised constuctor creation
        Hero (int score , char health){
            //cout << "this -> " << this << endl;
            this -> score = score;
            this -> health = health;
        }

        // copy constuctor creation
        Hero(Hero &copy){

            char *ch = new char[strlen(copy.name) + 1];
            strcpy(ch , copy.name);
            this -> name = ch;

            cout << " COPY CONSTUCTOR CALL " << endl;
            this -> score = copy.score;
            this -> health = copy.health;
        }

        // using of  Getter and Setter 
        int getLuckynumber(){
            return luckynumber;
        }

        int getScore(){
            return score;
        }

        char getHealth(){
            return health;
        }

        void setLuckymumber(int num){
            luckynumber = num;
        }

        void setScore(int s){
            score = s;
        }

        void setHealth(char h){
            health = h;
        }

        void setName( char name[]){
            strcpy(this -> name , name);
        }

        // creation of static function
        static int random(){
            return timeToCompelete;
        } 

        // distuctor creation
        ~Hero(){

            cout << " DISTUCTOR call ho gaya and all th memory are free " << endl;
        }

    };

    // static key word access
    int Hero :: timeToCompelete = 985;


    int main(){
    /*
        cout << Hero :: random() << endl;

        cout << Hero::timeToCompelete << endl;

        Hero a;
        cout << a.timeToCompelete << endl;

        Hero b;
        b.timeToCompelete = 980;
        cout << b.timeToCompelete << endl;
        cout << a.timeToCompelete << endl;

        // static object
        Hero yash;

        // dynamic object
        Hero  *yashu = new Hero;

        // we create a manually distructor for dynamically object 
        delete yashu;

        // shallow print
        Hero hero1;
        hero1.setHealth('R');
        hero1.setScore(89);
        char name[6] = "Yashu";
        hero1.setName(name);
        hero1.printt();

        Hero hero2(hero1);
        hero2.printt();

        hero1.name[0] = 'R';
        hero1.printt();
        hero2.printt();

        // copy assignment operator 
        cout << " COPY ASSIGNMENT OPERATOR CALL " << endl;
        hero1 = hero2;
        hero1.printt();
        hero2.printt();
    
        Hero Yash(95 , 'Y');
        Yash.printt();

        // copy constuctor
        Hero Jaimin(Yash);
        Jaimin.printt();

        Hero Yash(95 ,'K' );
        cout << "ADDRESS IS : " << &Yash << endl;
        Yash.getScore();
        Yash.getHealth();
        Yash.printt();
        
        // object created statically
        cout << endl;
        cout << " GOOD morning " << endl;
        cout << endl;
        Hero Yash;
        cout << " GOOD night " << endl;
        cout << endl;

        // object created dynamically
        cout << endl;
        cout << " GOOD night " << endl;
        cout << endl;
        Hero *Yashu = new Hero;
        cout << " GOOD morning " << endl;
        cout << endl;

        // static type
        // int i ;
        Hero Yashu;

        Yashu.setLuckymumber(1310);
        Yashu.setHealth('Y');
        Yashu.setScore(95);

        cout << endl;
        cout << "SCORE IS : " << Yashu.getScore() << endl;
        cout << "HEALTH IS : " << Yashu.getHealth() << endl;
        cout << "YASH KA LUCKY NUMBER HAI : " << Yashu.getLuckynumber() << endl;
        cout << endl;

        // dyanmic type
        // int *i = new int;
        Hero *Yash = new Hero;

        Yash -> setLuckymumber(1610);
        Yash -> setHealth('S');
        Yash -> setScore(43);

        cout << "SCORE IS : " << (*Yash).getScore() << endl;
        cout << "HEALTH IS : " << (*Yash).getHealth() << endl;
        cout << "YASH KA LUCKY NUMBER HAI : " << (*Yash).getLuckynumber() << endl;

        cout << endl;

        Yash -> setLuckymumber(346578);
        Yash -> setHealth('M');
        Yash -> setScore(63);

        cout << "SCORE IS : " << Yash -> getScore() << endl;
        cout << "HEALTH IS : " << Yash -> getHealth() << endl;
        cout << "YASH KA LUCKY NUMBER HAI : " << Yash ->  getLuckynumber() << endl;
        cout << endl;

        // creation of object --> Hero type ka  object hai 
        // stactic type
        Hero Yash; 

        Yash.health = 'A';
        Yash.score = 1610;

        Yash.setLuckymumber(1310);
        Yash.setHealth('Y');
        Yash.setScore(95);

        cout << "SCORE IS : " << Yash.getScore() << endl;
        cout << "HEALTH IS : " << Yash.getHealth() << endl;
        cout << "YASH KA LUCKY NUMBER HAI : " << Yash.getLuckynumber() << endl;

        cout << endl;

        cout << "SIZE : " << sizeof(Yash) << endl;
        cout << "SCORE IS : " << Yash.score << endl;
        cout << "HEALTH IS : " << Yash.health << endl; 
        //cout << "YASH KA LUCKY NUMBER HAI : " << Yash.luckynumber << endl; :::ERROR:::
    }
    
    // EXAMPLE 1:

    // constuctor outside the class:

    class student{

        private:
        int rno;
        char name[10];
        float fees;

        public:
        student();
        void display();

    };

    student :: student(){

        cout << " roll number is : " ;
        cin >> rno;
        cout << " name is : " ;
        cin >> name;
        cout << " fees are : " ;
        cin >> fees;
    }

    void student :: display(){
        cout << "[ " << rno << " " << name << " " << fees << " ]" ;
    }

    int main(){

        student yash;
        yash.display();

    }

    // EXAMPLE 2:

     class student{

    private :
    int rno ;
    char *name ;
    double fees;

    public:

    student( int , char[] , double);
    void display();
    student(student &t){

        char *ch = new char[strlen(t.name) + 1];
        strcpy(ch , t.name);
        this -> name = ch;

        this -> rno = t.rno;
        strcpy( name , t.name);
        fees = t.fees;
    }
   };

   student :: student(int no, char n[] , double f){

    name = new char[50];
    rno = no;
    strcpy(name , n);
    fees = f;
   }

   void student :: display(){

    cout << rno << " " << name << " " << fees ;

   }

   int main(){

    student Y(18 , "Yashu" , 150.89 );
    Y.display();
    cout << endl;
    student H(Y);
    H.display();
    
   }

// EXAMPLE 3:
// const keyword :

class name {

    public:

    void show() const {
        cout << " I AM YASHU " << endl;
    }

    void showw(){
        cout << " I AM NOT YASHU " << endl;
    }
};

int main(){

    name yash;
    yash.show();
    yash.showw();
}

*/