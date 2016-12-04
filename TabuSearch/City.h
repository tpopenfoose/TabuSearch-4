#pragma once
class City {

	vector <vector <int>> cityTab;
	int numberOfCities;
	vector <vector <float>> cityMatrix;

public:
	City();
	~City();
	City(string filename);
	void verticlesTab(string filename);
	void generateMatrix();
	void printMatrix();
};

