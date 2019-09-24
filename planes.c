#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cards {
	char name[20];
	int health;
	int attack;
	int shield;
	int speed;
};

void attack(struct Cards attacker,struct Cards defender);


int main() {
	
	struct Cards Nieuport;
	struct Cards Fokker;
	
	//mustang spec
	strcpy( Nieuport.name, "Nieuport" );
	Nieuport.health = 100;
	Nieuport.attack = 15;
	Nieuport.shield = 25;
	Nieuport.speed = 102;

	//fokker spec
	strcpy( Fokker.name, "fokker" );
	Fokker.health = 100;
	Fokker.attack = 15;
	Fokker.shield = 25;
	Fokker.speed = 115;

	printf("%i\n", Fokker.health);
	Fokker.health -= Nieuport.attack;
	printf("%i\n", Fokker.health);
	return 0;
}


void attack(struct Cards attacker, struct Cards defender) {
		
	defender.health = defender.health - attacker.attack;
}
