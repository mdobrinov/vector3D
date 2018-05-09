#include <iostream>
#include "vector3D.h"

using namespace std;

int main() {
	const int NUM = 10000;
	Vector3D vectors[NUM];
	Vector3D resultVector;
	char symbol;
	int size;
	double number = 0;
	cin >> symbol;
	switch (symbol) {
	case '+':
		cin >> size;
		for (int i = 0; i < size; i++) {
			cin >> vectors[i];
			resultVector = resultVector + vectors[i];
		}
		cout << resultVector;
		break;
	case '-':
		cin >> size;
		for (int i = 0; i < size; i++) {
			cin >> vectors[i];
			if (i == 0) resultVector = vectors[0];
			else resultVector = resultVector - vectors[i];
		}
		cout << resultVector;
		break;
	case '*':
		cin >> number;
		cin >> size;
		for (int i = 0; i < size; i++) {
			cin >> vectors[i];
			if (size == 1) cout << vectors[i] * number;
			else if(i<size-1) cout << vectors[i] * number<<" ";
			else if (i == size - 1) cout << vectors[i] * number;
			}
		break;
	case 'N': cin >> symbol >> symbol;
		cin >> size;
		for (int i = 0; i < size; i++) {
			cin >> vectors[i];
			if (size == 1) cout << -vectors[i];
			else if (i < size - 1) cout << -vectors[i] << " ";
			else if (i == size - 1) cout << -vectors[i];
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
				cin >> vectors[i];
				if (size == 1) cout << number*vectors[i];
				else if (i < size - 1) cout << number*vectors[i] << " ";
				else if (i == size - 1)	cout << number*vectors[i];
			}
			break;
		}
	}
	return 0;
}