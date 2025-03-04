#include<iostream>
#include<time.h>
#include<limits.h>
#include "../include/boid.hpp"
#include "../include/flock.hpp"
using namespace std;

int main(){
		srand(time(0));
		cout << "---------BOIDS---------" << endl;
		Boid* x = new Boid();
		x->printBoid();

		Flock* f = new Flock();
		f->printFlock();
}
