#pragma once
template<typename T>
void printVector(std::vector<T> myVector) {
	std::cout << '[';

	for (int i = 0; i < myVector.size(); i++) {
		std::cout << myVector[i];
		if (i < myVector.size() - 1)
			std::cout << ',';
	}

	std::cout << ']';
}

template<typename K>
void print2DVector(std::vector<std::vector<K>> myVector) {
	std::cout << '[';
	for (int i = 0; i < myVector.size(); i++) {
		std::cout << '[';
		for (int j = 0; j < myVector[i].size(); j++) {
			std::cout << myVector[i][j];
			if (j < myVector[i].size() - 1)
				std::cout << ',';
		}
		std::cout << ']';
		if (i < myVector.size() - 1)
			std::cout << '\n';
	}
	std::cout << ']';
	std::cout << '\n';
}