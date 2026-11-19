//INCLUDE STATEMENTS
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

//CONSTANTS
const double pi = 3.14159265359;

//PROTO FUNCTION
double Area(char shape, double val1=0.0, double val2=0.0, double val3=0.0);
double Volume(char shape, double val1=0.0, double val2=0.0, double val3=0.0);
double SurfaceArea(char shape, double val1=0.0, double val2=0.0, double val3=0.0);

double DecimalToBinary(double decimal=0);
double DecimalToOctal(double decimal=0);
string DecimalToHexadecimal(double decimal=0);

double BinaryToDecimal(double binary=0);
double BinaryToOctal(double binary=0);
string BinaryToHexadecimal(double binary=0);

double OctalToDecimal(double binary=0);
double OctalToBinary(double binary=0);
string OctalToHexadecimal(double binary=0);

double HexadecimalToDecimal(string hexa=0);
double HexadecimalToBinary(string hexa=0);
string HexadecimalToOctal(string hexa=0);

int main() {
	cout << "~-CAFULI C++ MULTIPURPOSE VERBOSE CALCULATOR-~" << "\n";
	return 0;
}

double Area(char shape, double val1, double val2, double val3) {
	double radius = val1;
	double side = val1;
	double length = val1, width = val2;
	double pbase = val1, pheight = val2;
	double tbase = val1, theight = val2;
	double trside1 = val1, trside2 = val2, trheight = val3;
	double diag1 = val1, diag2 = val2;
	switch(shape) {
		case 'c': //CUBE
			return pi * pow(radius, 2.0);
			break;
		case 's': //SPHERE
			return side * side;
			break;
		case 'r': //RECTANGLE
			return length * width;
			break;
		case 'p': //PARALLELOGRAM
			return pbase * pheight;
			break;
		case 't': //TRIANGLE
			return (1.0/2.0) * (tbase * theight);
			break;
		case 'T': //TRAPEZOID
			return (1.0/2.0) * (trside1 + trside2) * trheight;
			break;
		case 'R': //RHOMBUS
			return (1.0/2.0) * diag1 * diag2;
			break;
		default:
			return 0;
			break;
	}
}

double Volume(char shape, double val1, double val2, double val3) {
	double radius = val1, cheight = val2;
	double side = val1;
	double plength = val1, pwidth = val2, pheight = val3;
	double base = val1, height = val2;
	double tbase = val1, theight = val2, tlength = val3;
	double prside1 = val1, prside2 = val2, prheight = val3;
	double diag1 = val1, diag2 = val2;
	double eax1 = val1, eax2 = val2, eax3 = val3;
	switch(shape) {
		case 's': //SPHERE
			return (4.0/3.0) * pi * pow(radius, 3);
			break;
		case 'c': //CUBE
			return pow(side, 3);
			break;
		case 'p': //RECTANGULAR PRISM/PARALLELEPIPED
			return plength * pwidth * pheight;
			break;
		case 'n': //NONRECTANGULAR PRISM
			return base * height;
			break;
		case 't': //TRIANGULAR PRISM
			return (1.0/2.0) * (tbase * theight) * tlength;
			break;
		case 'P': //PYRAMID
			return (1.0/3.0) * (tbase * theight);
			break;
		case 'C': //CONE
			return (1.0/3.0) * pi * (radius * radius) * cheight;
		case 'h': //HEMISPHERE
			return ((4.0/3.0) * pi * pow(radius, 3) ) / 2;
			break;
		case 'e': //ELLIPSOID
			return (4.0/3.0) * pi * eax1 * eax2 * eax3;
		default:
			return 0;
			break;
	}
}

double SurfaceArea(char shape, double val1, double val2, double val3) {
	double radius = val1, cheight = val2;
	double side = val1;
	double plength = val1, pwidth = val2, pheight = val3;
	double base = val1, height = val2;
	double tbase = val1, theight = val2, tlength = val3;
	double prside1 = val1, prside2 = val2, prheight = val3;
	double diag1 = val1, diag2 = val2;
	double eax1 = val1, eax2 = val2, eax3 = val3;
	switch(shape) {
		case 's': //SPHERE
			return 4.0 * pi * (radius * radius);
			break;
		case 'c': //CUBE
			return 6.0 * (side * side);
			break;
		case 'p': //RECTANGULAR PRISM/PARALLELEPIPED
			return 2.0 * ((plength * pwidth) + (plength * pheight) + (pwidth * pheight));
			break;
		case 'n': //NONRECTANGULAR PRISM
			return (2.0 * base) ;
			break;
		case 't': //TRIANGULAR PRISM
			return (1.0/2.0) * (tbase * theight) * tlength;
			break;
		case 'P': //PYRAMID
			return (1.0/3.0) * (tbase * theight);
			break;
		case 'C': //CONE
			return (1.0/3.0) * pi * (radius * radius) * cheight;
		case 'h': //HEMISPHERE
			return ( (4.0/3.0) * pi * pow(radius, 3) ) / 2;
			break;
		case 'e': //ELLIPSOID
			return (4.0/3.0) * pi * eax1 * eax2 * eax3;
		default:
			return 0;
			break;
	}
}
