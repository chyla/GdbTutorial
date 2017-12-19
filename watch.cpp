#include <iostream>

using namespace std;

struct TestStructWatch
{
	int y;
};

void test_watch() {
	int x = 0;
	while (x < 10) {
		x++;
	}
}


int main(int argc, char **argv) {
	TestStructWatch tsw;

	tsw.y = 0;
	tsw.y++;

	test_watch();


	return 0;
}

