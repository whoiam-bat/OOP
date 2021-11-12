#include "Vector.h"

int main() {
	srand(time(NULL));
	vector<Vector> vectors(2);

	//Fill vectors
	for (int i = 0; i < vectors.size(); i++) {
		int randVal1 = rand() % (201 - 100);
		int randVal2 = rand() % (201 - 100);
		vectors[i] = Vector(randVal1, randVal2);
	}

	//Check out on equality
	printVectorInfo(vectors);

	vectors[0] == vectors[1];

	return 0;
}