#include "stdafx.h"
#include "Declaration.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

namespace MyGet {
	void GetData(Student *arr, int x) {
		cin.ignore();
		for (int i = 0; i < x; i++) {
			cout << "\n";
			cout << "Surname: ";
			cin.getline(arr[i].Surname, 30);

			cout << "Number of group: ";
			cin >> arr[i].Group;
			cin.ignore();

			cout << "Marks:" << endl;
			cout << "Subject 1: ";
			cin >> arr[i].Marks[0];
			cin.ignore();

			cout << "Subject 2: ";
			cin >> arr[i].Marks[1];
			cin.ignore();

			cout << "Subject 3: ";
			cin >> arr[i].Marks[2];
			cin.ignore();

			cout << "Subject 4: ";
			cin >> arr[i].Marks[3];
			cin.ignore();

			cout << "Subject 5: ";
			cin >> arr[i].Marks[4];
			cin.ignore();
		}
	}
}