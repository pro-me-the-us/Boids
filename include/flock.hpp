#ifndef _FLOCK_HPP
#define _FLOCK_HPP
#include "boid.hpp"
#include <vector>


class Flock{
	public:
	std::vector<Boid> flock;
	
	Flock();
	void generateCSV();
	void printFlock();
	void updateBoids();
	void Alignment();
	void Cohesion();
	void Separation();
};


#endif
