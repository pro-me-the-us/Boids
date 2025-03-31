#include<iostream>
#include<time.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include<limits.h>
#include "../include/boid.hpp"
#include "../include/flock.hpp"
using namespace std;

#define NUM_ITERATION 1000

void runGNUscript(int i){
		ofstream script("Script.txt");
		
		if(!script){
			cout << "ERROR OPENING SCRIPT"<< endl;
		}
		
		ostringstream oss;
		oss << setw(4) << setfill('0') << i;
		string frameNumber = oss.str();

		script << "set terminal png"<<endl;
		script << "set output \"images/image"+frameNumber+".png\"" << endl;
		script << "set title 'BOIDS"+frameNumber+"'" <<endl;
		script << "unset xlabel " << endl;
		script << "unset ylabel" << endl;
		script << "unset border" << endl;
		script << "set grid" << endl;
		script << "set xtics scale 0" << endl;
		script << "set ytics scale 0" << endl;
		script << "set xrange [0:200]" << endl;  
		script << "set yrange [0:200]" << endl;
		script << "set datafile separator \",\"" << endl;
		script << "unset key" << endl;

		script << "plot 'data.csv' using 1:2 with points pt 7 lc rgb \"purple\"" << endl;
		script.close();

		system("gnuplot Script.txt");
	
}

void generateVideo(){
	string command = "cd images && ffmpeg -framerate 30 -i \"image%04d.png\" -c:v libx264 -y  ../video/out.mp4";
	system(command.c_str());
}

int main(){
		srand(time(0));
		Flock* f = new Flock();
		for(int i=0;i<NUM_ITERATION;i++){
			f->generateCSV();
			runGNUscript(i);
			f->Alignment();
			f->Cohesion();
			f->Separation();
			f->updateBoids();
		}
		generateVideo();
} 
