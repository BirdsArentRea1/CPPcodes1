#include<iostream>
using namespace std;
int main() {

	int room = 1;
	char direction;

	while (1) {
		switch (room) {
		case 1:
			cout << "You are in room 1, you can go (E)ast" << endl;
			cin >> direction;
			if (direction == 'E')
				room = 2;
			break;
		case 2:
			cout << "You are in room 2, you can go (S)outh or (W)est" << endl;
			cin >> direction;
			if (direction == 'S')
				room = 3;
			if (direction == 'W')
				room = 1;
			break;
		case 3:
			cout << "You are in room 3, you can go (S)outh or (N)orth" << endl;
			cin >> direction;
			if (direction == 'S')
				room = 4;
			if (direction == 'N')
				room = 2;
			break;
		case 4:
			cout << "You are in room 4, you can go (E)ast or (N)orth" << endl;
			cin >> direction;
			if (direction == 'E')
				room = 5;
			if (direction == 'N')
				room = 3;
			break;
		case 5:
			cout << "You are in room 5, you can go (W)est" << endl;
			cin >> direction;
			if (direction == 'W')
				room = 4;
			break;


		}
	}

}