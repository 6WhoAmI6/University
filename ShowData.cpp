#include "stdafx.h"
#include "Declaration.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

namespace MyShow {
	void ShowData(Student *arr, int x) {
		for (int i = 0; i < x; i++) {
			cout << "\n";
			cout << "Student " << i + 1 << endl;
			cout << "Surname: " << arr[i].Surname << endl;
			cout << "Number of group: " << arr[i].Group << endl;
			cout << "Marks:" << endl;
			cout << "Subject 1: " << arr[i].Marks[0] << endl;
			cout << "Subject 2: " << arr[i].Marks[1] << endl;
			cout << "Subject 3: " << arr[i].Marks[2] << endl;
			cout << "Subject 4: " << arr[i].Marks[3] << endl;
			cout << "Subject 5: " << arr[i].Marks[4] << endl;
		}
		cout << endl;
	}
}