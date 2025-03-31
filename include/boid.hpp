#ifndef _BOID_HPP
#define _BOID_HPP

class Boid{
	private :
		float x; 
		float y;
		float vX;
		float vY;
		float aX;
		float aY;
	public :	
		Boid();
		void updatePosition();
		void Alignment();
		void Cohesion();
		void Separation();
		void printBoid();
		float getX();
		float getY();
		void setvX(float vX);
		void setvY(float vY);
		void setaX(float aX);
		void setaY(float aY);
		float getVelX();
		float getVelY();
		float getaccX();
		float getaccY();
		float Distance(int x1,int x2,int y1,int y2);
};

#endif
