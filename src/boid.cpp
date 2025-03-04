#include <iostream>
#include <ctime>
#include<limits.h>
#include<cstdlib>
#include<unistd.h>
#include "../include/boid.hpp"

using namespace std;

#define Xmax 200
#define Ymax 200


Boid::Boid(){
	x = rand()%Xmax;
	y= rand()%Ymax;
	vX = rand()%MAX_SPEED;
	vY = rand()%MAX_SPEED;
	//sleep(1);
}

void Boid::printBoid(){
	cout << "X : " << this->x << endl;
   	cout << "Y : " << this->y << endl;
	cout << "Velocity X : " << this->vX << endl;
	cout << "Velocity Y : " << this->vY << endl; 
}


