#include <iostream>
#include <ctime>
#include<limits.h>
#include<cstdlib>
#include <cmath>
#include<unistd.h>
#include "../include/boid.hpp"
#include "../include/flock.hpp"
using namespace std;

#define Xmax 200
#define Ymax 200

#define MAX_SPEED 3,5 //maximum velocity a boid can attain
#define MAX_FORCE 0.5



Boid::Boid(){
	x = rand()%Xmax;
	y= rand()%Ymax;
	vX = (rand()%7 - 3);
	vY = (rand()%7 - 3);
	//sleep(1);
}

void Boid :: setvX(float vX){
	this->vX = vX;
}


void Boid :: setvY(float vY){
	this->vY = vY;
}

void Boid :: setaX(float aX){
	this->aX = aX;
}


void Boid :: setaY(float aY){
	this->aY = aY;
}



void Boid::updatePosition(){
	vX = vX + aX;
	vY = vY + aY;
	float speed = sqrt(vX * vX + vY * vY);
	if (speed > MAX_SPEED) {
    vX = (vX / speed) * MAX_SPEED;
    vY = (vY / speed) * MAX_SPEED;
	}
	x = (int)(x + vX + Xmax) % Xmax;
	y = (int)(y + vY + Ymax) % Ymax;

}


float Boid::getX(){
	return this->x;
}
float Boid::getY(){
	return this->y;
}

float Boid::getVelX(){
	return this->vX;
}

float Boid::getVelY(){
	return this->vY;
}

float Boid::getaccX(){
	return this->aX;
}

float Boid::getaccY(){
	return this->aY;
}

void Boid::printBoid(){
	cout << "X : " << this->x << endl;
   	cout << "Y : " << this->y << endl;
	cout << "Velocity X : " << this->vX << endl;
	cout << "Velocity Y : " << this->vY << endl; 
}



