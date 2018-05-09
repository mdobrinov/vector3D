#include <iostream>
#include "vector3D.h"

using namespace std;

int main() {
	Vector3D currentVector;
	Vector3D resultVector;
	char symbol;
	int size;
	double number = 0;
	cin >> symbol;
	switch (symbol) {
	case '+':
		cin >> size;
		for (int i = 0; i < size; i++) {
			cin >> currentVector;
			resultVector = resultVector + currentVector;
		}
		cout << resultVector;
		break;
	case '-':
		cin >> size;
		for (int i = 0; i < size; i++) {
			cin >> currentVector;
			if (i == 0) resultVector = currentVector;
			else resultVector = resultVector - currentVector;
		}
		cout << resultVector;
		break;
	case '*':
		cin >> number;
		cin >> size;
		for (int i = 0; i < size; i++) {
			cin >> currentVector;
			if (i < size - 1) cout << currentVector * number << " ";
			else if (i == size - 1) cout << currentVector * number;
			}
		break;
	case 'N': cin >> symbol >> symbol;
		cin >> size;
		for (int i = 0; i < size; i++) {
			cin >> currentVector;
			if (i < size - 1) cout << -currentVector << " ";
			else if (i == size - 1) cout << -currentVector;
		}
		break;
	default:
		if (symbol >= '0' && symbol <= '9') {
			bool decimal_part = false;
			while (symbol != '*') {
				if (decimal_part == true) {
					number = number + double((symbol - '0')) / 10;
				}
				if (symbol == '.') decimal_part = true;
				if (decimal_part == false) {
					number = number * 10 + (symbol - '0');
				}
				cin >> symbol;		
			}
			cin >> size;
			for (int i = 0; i < size; i++) {
				cin >> currentVector;
				if (i < size - 1) cout << number*currentVector << " ";
				else if (i == size - 1)	cout << number*currentVector;
			}
			break;
		}
	}
	system("pause");
	return 0;
}