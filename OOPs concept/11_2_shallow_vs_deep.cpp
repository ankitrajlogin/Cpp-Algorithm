

#include<bits/stdc++.h>
using namespace std ; 

class Hero{
    private:
        int health ;

    public : 
        char *name ; 
        char level ; 

        Hero(){
            cout << "Simple constructor called" << endl;  
            name = new char[100] ; 
        }

        Hero(int health){
            this->health = health ; 
        }

        
       

        void print(){
            cout << "[ Name: " << name << "; health: " << this->health << "; level: " << this->level << " ]" << endl; 
        }

        int getHealth(){
            return health ; 
        }

        char getLevel(){
            return level ; 
        }

        void setHealth(int h){
            health = h; 
        }

        void setLevel(char ch){
            level = ch ; 
        }

        void setName(char name[]){
            strcpy(this->name , name) ; 
        }

};


int main(){
    Hero hero1 ;
    hero1.setHealth(12) ; 
    hero1.setLevel('D') ; 

    char name[7] = "ankit" ;
    hero1.setName(name) ; 

    hero1.print() ; 


    Hero hero2(hero1) ; 
    hero2.print() ; 

    char name2[12] = "rahul" ;
    hero2.setName(name2) ; 

    hero2.print() ; 
    hero1.print() ; 



    return 0 ; 
}