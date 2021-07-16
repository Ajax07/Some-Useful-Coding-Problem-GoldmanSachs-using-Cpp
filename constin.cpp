#include <iostream>
#include <string>

using namespace std;

class Player{
	string name;
	int health;
	int xp;
public:
	Player();
	Player(std::string name_val);
	Player(std::string name_val, int health_val, int xp_val);

};

Player::Player()
 : name{"none"},health{0},xp{0}{

 }
Player::Player(std::string name_val)
 : name{"name_val"},health{0},xp{0}{
 	
 }