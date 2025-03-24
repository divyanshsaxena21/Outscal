#include <stdio.h>
#include <iostream>

using namespace std;

// Creating Game Story
// OOPs
// Classes
// Creating a Player Class
// Constructior
// Creating a Player's Object


void gameStory(){
    system ("clear") ;
    cout<<"---------------------------------------------------------------------\n";
    cout<<"|Letho : A true Warrior |";
    cout<<"---------------------------------------------------------------------\n";
    cout<<"\nOnce upon a time, there was a kingdom full of happiness. The king named Garelt had a beautiful princess named Barbara. "<<endl;
    cout<<"---------------------------------------------------------------------\n";
    cout<<"\nUnfortunately, on one evil day, the Hollow Knight kidnapped Barbara. \nNow the entire kingdom is at stake. Hollow Knight is a ruler of the dark world.";
    cout<<"---------------------------------------------------------------------\n";
}

class Player{
    public:
        Player(){
            cout<<"Constructor"<<endl;
            int Health;
            int damage;
        }

        void Attack(){
            cout<<"Attack Function"<<endl;
        }

    };
int main(){

    // gameStory();
    Player playerObj;

}