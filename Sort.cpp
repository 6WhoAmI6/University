#include "stdafx.h"
#include <iostream>
#include "Declaration.h"
#include <cstdlib>
#include <cmath>

	using namespace std;

	namespace MySort {
	void Sort(Student *arr, int x) {
		Student tmp;
		for (int i = 0; i < x - 1; i++)
			for (int j = i + 1; j < x; j++)
				if (arr[i].Group > arr[j].Group) {
					tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
				}
	}
}