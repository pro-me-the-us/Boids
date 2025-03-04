#ifndef _FLOCK_HPP
#define _FLOCK_HPP
#include "boid.hpp"



class Flock{
	public:
	Boid** flock;
	
	Flock();
	void printFlock();
};


#endif
