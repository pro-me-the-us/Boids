#ifndef _BOID_HPP
#define _BOID_HPP

#define MAX_SPEED 6 //maximum velocity a boid can attain
//#define MIN_SPEED 3 //minimum velocity of a boid
#define PROTECTED_RANGE 0.5 //inner radius 
#define VISUAL_RANGE 2 //local flock radius 

class Boid{
	private :
		int x; 
		int y;
		int vX;
		int vY;
	public :	
		Boid();
		void updatePosition();
		void Alignment();
		void Cohesion();
		void Separation();
		void printBoid();
};

#endif
