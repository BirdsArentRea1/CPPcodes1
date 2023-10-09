#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	bool running = true;

	while (running) {
		int num = (rand() % 20);
		for (int i = 0; i < num; i++) {
			cout << " ";
		}
		cout << "<3";
		Sleep(1);
	}
}