#include<iostream>
#include<string>
#include <cmath>
#include <fstream>
#include "../include/flock.hpp"

using namespace std;

#define PROTECTED_RANGE 20//inner radius 
#define VISUAL_RANGE 30 //local flock radius 
#define POPULATION_SIZE 150
#define MAX_FORCE 0.75
#define ALIGNMENT_FACTOR 0.1
#define SCALING_FACTOR 0.1
#define SEPARATION_STRENGTH 0.8

Flock :: Flock(){
	this->flock.resize(POPULATION_SIZE);
}


void Flock:: generateCSV(){
	ofstream data("data.csv");

	for(int i=0;i<POPULATION_SIZE;i++){
		data << to_string(flock[i].getX()) << "," <<to_string(flock[i].getY()) << endl;		
	}

	data.close();
}


void Flock::printFlock(){
	cout << "----------FLOCK----------" << endl;
	for(int i=0;i<POPULATION_SIZE;i++){
		flock[i].printBoid();
	}
}

void Flock::updateBoids(){
	for(auto &Boid : this->flock){
		Boid.updatePosition();
	}
}

float Distance(int x1,int x2,int y1,int y2){
	int X = (x1-x2)*(x1-x2);
	int Y = (y1-y2)*(y1-y2);
	return sqrt(X+Y);
}

void Flock::Alignment(){
	vector<Boid> state(this->flock);

	for(auto &Boid : this->flock){
		int neighbourCount = 0;
		float avg_x = 0, avg_y = 0;

		for(auto &otherBoid : state){
			if (&Boid == &otherBoid)
					continue;

			float dist = Distance(Boid.getX(),otherBoid.getX(),Boid.getY(),otherBoid.getY());
			if( dist < VISUAL_RANGE){
				neighbourCount++;
				avg_x +=otherBoid.getVelX();
				avg_y += otherBoid.getVelY();
			}
		}
		if(neighbourCount){
			avg_x = avg_x/neighbourCount;
			avg_y = avg_y/neighbourCount;
		}else{
			continue;
		}

		float Fx = avg_x - Boid.getVelX();
		float Fy = avg_y - Boid.getVelY();

		Fx *= ALIGNMENT_FACTOR;
		Fy *= ALIGNMENT_FACTOR;

		float normalizedF = sqrt(Fx*Fx + Fy*Fy);
		if(normalizedF > 0){
			Fx = (Fx/normalizedF)*MAX_FORCE;
			Fy = (Fy/normalizedF)*MAX_FORCE;
		}



		Boid.setaX(Fx + Boid.getaccX());
		Boid.setaY(Fy+ Boid.getaccY());
		float accX = Boid.getaccX();
		float accY = Boid.getaccY();
		float accMagnitude = sqrt(accX * accX + accY * accY);
		if (accMagnitude > MAX_FORCE) {
    		accX = (accX / accMagnitude) * MAX_FORCE;
    		accY = (accY / accMagnitude) * MAX_FORCE;
		}
		Boid.setaX(accX);
		Boid.setaY(accY);
	}
}

void Flock::Cohesion(){
	vector<Boid> state(this->flock);

	for(auto &Boid : this->flock){
		int neighbourCount = 0;
		float avg_x = 0, avg_y = 0;

		for(auto &otherBoid : state){
			if (&Boid == &otherBoid)
					continue;

			float dist = Distance(Boid.getX(),otherBoid.getX(),Boid.getY(),otherBoid.getY());
			if( dist < VISUAL_RANGE){
				neighbourCount++;
				avg_x +=otherBoid.getX();
				avg_y += otherBoid.getY();
			}
		}
		if(neighbourCount){
			avg_x = avg_x/neighbourCount;
			avg_y = avg_y/neighbourCount;
		}else{
			continue;
		}

		float Fx = avg_x - Boid.getX();
		float Fy = avg_y - Boid.getY();

		Fx *= SCALING_FACTOR;
		Fy *= SCALING_FACTOR;

		float normalizedF = sqrt(Fx*Fx + Fy*Fy);
		if(normalizedF > 0){
			Fx = (Fx/normalizedF)*MAX_FORCE;
			Fy = (Fy/normalizedF)*MAX_FORCE;
		}



		Boid.setaX(Fx + Boid.getaccX());
		Boid.setaY(Fy+ Boid.getaccY());
		float accX = Boid.getaccX();
		float accY = Boid.getaccY();
		float accMagnitude = sqrt(accX * accX + accY * accY);
		if (accMagnitude > MAX_FORCE) {
    		accX = (accX / accMagnitude) * MAX_FORCE;
    		accY = (accY / accMagnitude) * MAX_FORCE;
		}
		Boid.setaX(accX);
		Boid.setaY(accY);
	}
}

void Flock::Separation(){
	vector<Boid> state(this->flock);

	for(auto &Boid : this->flock){
		float Fx = 0;
		float Fy = 0;
		for(auto &otherBoid : state){
			if (&Boid == &otherBoid)
					continue;

			float dist = Distance(Boid.getX(),otherBoid.getX(),Boid.getY(),otherBoid.getY());
			if( dist < PROTECTED_RANGE){
				Fx += (Boid.getX() - otherBoid.getX())/(dist*dist+0.01);
				Fy += (Boid.getY() - otherBoid.getY())/(dist*dist+0.01);
			}
		}
		
		Fx *= SEPARATION_STRENGTH;
		Fy *= SEPARATION_STRENGTH;

		Boid.setaX(Fx + Boid.getaccX());
		Boid.setaY(Fy+ Boid.getaccY());
		float accX = Boid.getaccX();
		float accY = Boid.getaccY();
		float accMagnitude = sqrt(accX * accX + accY * accY);
		if (accMagnitude > MAX_FORCE) {
    		accX = (accX / accMagnitude) * MAX_FORCE;
    		accY = (accY / accMagnitude) * MAX_FORCE;
		}
		Boid.setaX(accX);
		Boid.setaY(accY);
	}
}

