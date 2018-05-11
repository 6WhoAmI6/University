#include "stdafx.h"
#include "Declaration.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

namespace MyMark {
	void MiddleMark(Student *arr, int x) {
		double middle;
		int n = 0;
		cout << "Students with middle mark more than 4.0: " << endl;
		for (int i = 0; i < x; i++) {
			middle = (arr[i].Marks[0] + arr[i].Marks[1] + arr[i].Marks[2] + arr[i].Marks[3] + arr[i].Marks[4]) / 5.0;
			if (middle > 4.0) {
				cout << "Surname: " << arr[i].Surname << endl;
				cout << "Number of group: " << arr[i].Group << endl;
				n++;
			}
		}
		if (n == 0)
			cout << "There are no such students" << endl;

	}
}