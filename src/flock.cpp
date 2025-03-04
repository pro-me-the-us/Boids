#include<iostream>
#include "../include/flock.hpp"

using namespace std;

#define POPULATION_SIZE 100

Flock::Flock(){
	this->flock = new Boid*[POPULATION_SIZE];
	for(int i=0;i<POPULATION_SIZE;i++){
		flock[i] = new Boid();
	}
}

void Flock::printFlock(){
	cout << "----------FLOCK----------" << endl;
	for(int i=0;i<POPULATION_SIZE;i++){
		flock[i]->printBoid();
	}
}
