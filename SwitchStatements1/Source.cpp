#include<iostream>
using namespace std;
int main() {
	char room; 
	cout << "What roomwould you like to visit?" << endl;
	cout << "(F)ront gate, (A)lligators, 3: (L)ions, 4: (P)opcorn stand, 5: (M)onkeys" << endl;
	cin >> room; 
	switch (room) {
	case 'F':
		cout << "Buy a ticket" << endl;
		break;
	case 'A':
		cout << "Don't get eatin" << endl;
		break;
	case 'L':
		cout << "Good thing they're sleeping" << endl;
		break;
	case 'P':
		cout << "Yum" << endl;
		break;
	case 'M':
		cout << "Here's a bannana" << endl;
		break;
	default: 
		cout << "sorry, thta's not a room option" << endl;
	}

	
}