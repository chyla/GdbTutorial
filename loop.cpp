#include <iostream>

using namespace std;


void test_loop() {
	int b = 2;
	int i = 0;

	while (i == 0) {
		// pass
	}
}


int main(int argc, char **argv) {
	int x = 3;
	void *ptr = static_cast<void*>(&x);

	test_loop();

	return 0;
}

