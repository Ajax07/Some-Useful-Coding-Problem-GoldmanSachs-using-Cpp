#include<iostream>
#include <string>
#include <vector>

using namespace std;
class Player
{
 public:
        string name;
        int health;
        int xp;


        void talk(string text_to_say){
        	cout<<name<< "says"<<text_to_say<<endl;
        }
        bool is_dead();
};

class Account{
public:
	string name{"Ajay"};
	double balance {0.0};
	bool deposit(double bal);
	bool withdraw(double bal);
};


int main()
{
        Player frank;
        frank.name = "frank";
        frank.health = 100;
        frank.xp = 12;
        frank.talk("hi there!");
       /* Player hero;
        Player players[] {frank,hero};
        vector<Player> player_vec{frank};
        player_vec.push_back(hero);*/
        Player *enemy = new Player;
        (*enemy).name = "Enemy";
        (*enemy).health = 100;
        enemy->xp= 15;
        enemy-> talk("i will eat your pussy");
        delete enemy;

        return 0;

}