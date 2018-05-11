// Laba3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Declaration.h"
#include "Sort.h"
#include "GetData.h"
#include "ShowData.h"
#include "MiddleMark.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

Student arr[10];

int main()
{
	MyGet::GetData(arr, 10);
	MySort::Sort(arr, 10);
	MyShow::ShowData(arr, 10);
	MyMark::MiddleMark(arr, 10);

	system("pause");

    return 0;
}

