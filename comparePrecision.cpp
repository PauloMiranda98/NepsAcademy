#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;


double absP(double a){
	if(a >= 0)
		return a;
		
	return -1*a;
}

int main(int argc, char** args){
	
	double a, b;
	
	ifstream ra(args[1]);
	ifstream rb(args[2]);
	
	while(1){
		if(ra.eof() and rb.eof())
			break;
			
		if(ra.eof() or rb.eof()){
			cout << "1" << endl;
			return 0;
		}
		
		ra >> a;
		rb >> b;
					
		if( absP(a-b) >= 0.000001 ){
			cout << "1" << endl;
			return 0;
		}	
	}
	
	cout << "0" << endl;
	
	return 0;
}
