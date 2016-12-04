// TabuSearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Generator.h"
#include "City.h"

int main()
{
	Generator myGenerator(10, 0, 100, 0, 100);
	City myCity("plik.txt");
	myCity.printMatrix();



    return 0;
}

