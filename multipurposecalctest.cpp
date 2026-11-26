//INCLUDE STATEMENTS
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

//CONSTANTS
const double pi = 3.14159265359;
const string hexdigits = "0123456789ABCDEF";

//PROTO FUNCTIONS

//GEOMETRY
double Area(char shape, double val1=0.0, double val2=0.0, double val3=0.0);
double Volume(char shape, double val1=0.0, double val2=0.0, double val3=0.0);
double SurfaceArea(char shape, double val1=0.0, double val2=0.0, double val3=0.0);

//TRIGONOMETRY
double PythagoreanTheorem(char missing='c', double num1=0.0, double num2=0.0);
double LawOfSines(char missing='c', double num1=0.0, double num2=0.0, double degrees=0.0);
double LawOfCosines(char missing='c', double num1=0.0, double num2=0.0, double degrees=0.0);

//NUMBER SYSTEMS
int DecimalToBinary(int decimal=0);
int DecimalToOctal(int decimal=0);
string DecimalToHexadecimal(int decimal=0);
int BinaryToDecimal(int binary=0);
int BinaryToOctal(int binary=0);
string BinaryToHexadecimal(int binary=0);
int OctalToDecimal(int binary=0);
int OctalToBinary(int binary=0);
string OctalToHexadecimal(int binary=0);
int HexadecimalToDecimal(string hexa="0");
int HexadecimalToBinary(string hexa="0");
int HexadecimalToOctal(string hexa="0");

int main() {
	bool exit=false;
	char choice_a, choice_b, choice_c, exitinput;
	char charinput1,charinput2,charinput3;
	int intinput1, intinput2, intinput3;
	double doubleinput1, doubleinput2, doubleinput3;
	cout << "~-CAFULI C++ MULTIPURPOSE VERBOSE CALCULATOR-~" << "\n";
	do {
		cout << "--------------------------------" << "\n";
		cout << "CHOICES:" << "\n";
		cout << "[B] - Basic Mathematics" << "\n";
		cout << "[G] - Geometry" << "\n";
		cout << "[T] - Trigonometry" << "\n";
		cout << "[N] - Number Systems" << "\n";
		cout << "\n" << "Enter your choice>";
		cin >> choice_a;
		cout << "--------------------------------" << "\n";
		cout << "Would you like to exit? (Y/N)>";
		cin >> exitinput;
		switch(exitinput) {
			case 'Y':
			case 'y':
				exit = true;
				break;
			default:
				exit = false;
				break;
		}
	}
	while (exit==false);
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


int DecimalToBinary(int decimal) {
	if (decimal == 0) {
		return 0;
	}
	return (decimal % 2) + 10 * DecimalToBinary(decimal/2);
}

int DecimalToOctal(int decimal) {
	if (decimal == 0) {
		return 0;
	}
	return (decimal % 8) + 10 * DecimalToOctal(decimal/8); 
}

string DecimalToHexadecimal(int decimal) {
	if (decimal < static_cast<int>(16)) {
		return string(1, hexdigits[decimal]);
	}
	return DecimalToHexadecimal(decimal/16) + hexdigits[decimal % 16];
}

int BinaryToDecimal(int binary) {
	if (binary == 0) {
		return 0;
	}
	return (binary % 10) + 2 * BinaryToDecimal(binary/10);
}

int BinaryToOctal(int binary) {
	int decimal = BinaryToDecimal(binary);
	return DecimalToOctal(decimal);
}

string BinaryToHexadecimal(int binary) {
	int decimal = BinaryToDecimal(binary);
	return DecimalToHexadecimal(decimal);
}

int OctalToBinary(int octal) {
	int decimal = OctalToDecimal(octal);
	return DecimalToBinary(decimal);
}

int OctalToDecimal(int octal) {
	if (octal == 0) {
		return 0;
	}
	return (octal % 10) + 8 * BinaryToDecimal(octal/10);
}

string OctalToHexadecimal(int octal) {
	int decimal = OctalToDecimal(octal);
	return DecimalToHexadecimal(decimal);
}

int HexadecimalToDecimal(string hexadecimal) {
	return stoi(hexadecimal, nullptr, 16);
}

int HexadecimalToBinary(string hexadecimal) {
	int decimal = HexadecimalToDecimal(hexadecimal);
	return DecimalToBinary(decimal);
}

int HexadecimalToOctal(string hexadecimal) {
	int decimal = HexadecimalToDecimal(hexadecimal);
	return DecimalToOctal(decimal);
}

double PythagoreanTheorem(char missing, double num1, double num2) {
	double a,b,c,sqr,radians;
	radians = degrees * (pi/180.00);
	switch(missing) {
		case 'a':
			b = num1;
			c = num2;
			sqr = pow(c,2) - pow(b,2);
			a = sqrt(sqr);
			return a;
			break;
		case 'b':
			a = num1;
			c = num2;
			sqr = pow(c,2) - pow(a,2);
			b = sqrt(sqr);
			return b;
			break;
		case 'c':
		default:
			a = num1;
			b = num2;
			sqr = pow(a,2) + pow(b,2);
			c = sqrt(sqr);
			return c;
			break;
	}
}

double LawOfCosines(char missing, double num1, double num2, double degrees) {
	double a,b,c,sqr,radians;
	radians = degrees * (pi/180.00);
	switch(missing) {
		case 'a':
			b = num1;
			c = num2;
			sqr = (2*b*c) * cos(radians);
			a = sqrt(sqr);
			return a;
			break;
		case 'b':
			a = num1;
			c = num2;
			sqr = (2*a*c) * cos(radians);
			b = sqrt(sqr);
			return b;
			break;
		case 'c':
		default:
			a = num1;
			b = num2;
			sqr = (2*a*b) * cos(radians);
			c = sqrt(sqr);
			return c;
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
			return 0.0;
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
			return 0.0;
			break;
	}
}
