#include <vector>
#include <string>
#include <iostream>
#include "printvector.h"

int main() {

	//create vector of vectors
	std::vector<std::vector<float>> my2DVector;

	for (int i = 0; i < 10; i++) {
		std::vector<float>temp;

		for (int j = 0; j < 10; j++) {
			temp.push_back(0.0f);
		}
		my2DVector.push_back(temp);
	}

	//print vector of vectors
	std::cout << "2D vector:\n";
	print2DVector(my2DVector);


	//create vector
	std::vector<int> myVector;
	for (int i = 0; i < 10; i++) {
		myVector.push_back(i);
	}

	//print vector
	std::cout << "vector:\n";
	printVector(myVector);
	
	return 0;
}