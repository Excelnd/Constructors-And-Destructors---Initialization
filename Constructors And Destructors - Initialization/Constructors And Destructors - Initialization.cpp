// Constructors And Destructors - Initialization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class rectangle
{
	int height;
	int width;

public:
	rectangle(void);
	int area(void);
	void initialize(int, int);
	~rectangle(void);
};

//implementation part
rectangle::rectangle(void)
// constructor implementation
{
	height = 6;
	width = 6;
}

int rectangle::area(void)
{
	return(height * width);
}

void rectangle::initialize(int initial_height, int initial_width)
{
	height = initial_height;
	width = initial_width;
}

// destructor
rectangle::~rectangle(void)
{
	height = 0;
	width = 0;
}

// a normal structure - compare with class usage
struct pole
{
	int length;
	int depth;
};


int main()
{
	rectangle wall, square;
	pole lamp_pole;

	cout << "Using class instead of struct, using DEFAULT VALUE\n";
	cout << "supplied by constructor, access through method area()\n";
	cout << "---------------------------------------------------\n\n";
	cout << "Area of the wall-->wall.area() = " << wall.area() << "\n\n";
	cout << "Area of the square-->square.area() = " << square.area() << "\n\n";

	wall.initialize(12, 10);
	square.initialize(8, 8);
	lamp_pole.length = 50;
	lamp_pole.depth = 6;


	cout << "Using class instead of struct, USING ASSIGNED VALUE\n";
	cout << "access through method area()\n";
	cout << "----------------------------------------------------\n";
	cout << "Area of the wall-->wall.area() = " << wall.area() << "\n\n";
	cout << "Area of the square-->square.area()= " << square.area() << "\n\n";
	

    return 0;
}

