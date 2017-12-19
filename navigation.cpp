#include <iostream>

using namespace std;

int increment(int &x) {
	x++;
}

int decrement(int &x) {
	x--;
}

int main(int argc, char **argv) {
	int val = 0;

	increment(val);

	decrement(val);

	val += 10;

	return 0;
}

