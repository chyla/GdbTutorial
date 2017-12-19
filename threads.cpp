#include <iostream>
#include <thread>

using namespace std;


void my_thread() {
	for (int i = 0; i < 10; i++) {
		cout << "Value: " << i << endl;
	}
}


int main() {
	thread a(my_thread);
	thread b(my_thread);

	a.join();
	b.join();

	return 0;
}

