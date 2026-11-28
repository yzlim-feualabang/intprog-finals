//INCLUDE STATEMENTS
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

//CONSTANTS
const double pi = 3.14159265359;
const string hexdigits = "0123456789ABCDEF";
const string displaystrings[] = {"Enter your choice>","ERROR: INVALID INPUT!","Would you like to exit? (Y/N)>"};
const string headerstrings[] = {"MAIN MENU:","BASIC ARITHMETIC:","GEOMETRY:","TRIGONOMETRY:","NUMBER SYSTEMS:"};

//PROTO FUNCTIONS

//GEOMETRY
double Perimeter(char shape, double val1=0.0, double val2=0.0, double val3=0.0, double val4=0.0);
double Circumference(double radius=0.0);
double Area(char shape, double val1=0.0, double val2=0.0, double val3=0.0);
double Volume(char shape, double val1=0.0, double val2=0.0, double val3=0.0);
double SurfaceArea(char shape, double val1=0.0, double val2=0.0, double val3=0.0);
double DegreesToRadians(double degrees=0.0);
double RadiansToDegrees(double radians=0.0);

//TRIGONOMETRY
double PythagoreanTheorem(char missing='c', double num1=0.0, double num2=0.0);
double LawOfSines(char missing='A', double num1=0.0, double num2=0.0, double num3=0.0);
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
	cout << setw(32) << "CAFULI 4-IN-1 CALCULATOR" << "\n";
	do {
		cout << "--------------------------------" << "\n";
		cout << headerstrings[0] << "\n";
		cout << "[A] - Basic Arithmetic" << "\n";
		cout << "[G] - Geometry" << "\n";
		cout << "[T] - Trigonometry" << "\n";
		cout << "[N] - Number Systems" << "\n";
		cout << "\n" << displaystrings[0];
		cin >> choice_a;
		cout << "--------------------------------" << "\n";
		switch(choice_a) {
			case 'A':
				cout << headerstrings[1] << "\n";
				cout << "[A] - Addition" << "\n";
				cout << "[S] - Subtraction" << "\n";
				cout << "[M] - Multiplication" << "\n";
				cout << "[D] - Division" << "\n";
				cout << "[R] - Modulus/Get Remainder" << "\n";
				cout << "\n" << displaystrings[0];
				cin >> choice_b;
				cout << "--------------------------------" << "\n";
				switch(choice_b) {
					case 'A':
						cout << "ADDITION:" << "\n";
						cout << "\n" << "Enter two numbers>";
						cin >> doubleinput1 >> doubleinput2;
						cout << doubleinput1 << "+" << doubleinput2 << "\n";
						cout << "= "<< doubleinput1 + doubleinput2 << "\n";
						break;
					case 'S':
						cout << "SUBTRACTION:" << "\n";
						cout << "\n" << "Enter two numbers>";
						cin >> doubleinput1 >> doubleinput2;
						cout << doubleinput1 << "-" << doubleinput2 << "\n";
						cout << "= "<< doubleinput1 - doubleinput2 << "\n";
						break;
					case 'M':
						cout << "MULTIPLICATION:" << "\n";
						cout << "\n" << "Enter two numbers>";
						cin >> doubleinput1 >> doubleinput2;
						cout << doubleinput1 << "*" << doubleinput2 << "\n";
						cout << "= "<< doubleinput1 * doubleinput2 << "\n";
						break;
					case 'D':
						cout << "DIVISION:" << "\n";
						cout << "\n" << "Enter two numbers>";
						cin >> doubleinput1 >> doubleinput2;
						cout << doubleinput1 << "/" << doubleinput2 << "\n";
						cout << "= "<< doubleinput1 * doubleinput2 << "\n";
						break;
					case 'R':
						cout << "MODULUS/GET REMAINDER:" << "\n";
						cout << "\n" << "Enter two numbers>";
						cin >> intinput1 >> intinput2;
						cout << intinput1 << "%" << intinput2 << "\n";
						cout << "= "<< intinput1 % intinput2 << "\n";
						break;
					default:
						cout << displaystrings[1] << "\n";
						break;
				}
				break;
			case 'G':
				cout << headerstrings[2] << "\n";
				cout << "[P] - Perimeter" << "\n";
				cout << "[C] - Circumference" << "\n";
				cout << "[A] - Areas" << "\n";
				cout << "[V] - Volumes" << "\n";
				cout << "[S] - Surface Areas" << "\n";
				cout << "[D] - Degrees To Radians" << "\n";
				cout << "[D] - Radians To Degrees" << "\n";
				cout << "\n" << displaystrings[0];
				cin >> choice_b;
				cout << "--------------------------------" << "\n";
				switch(choice_b) {
					default:
						break;
				}
				break;
			case 'T':
				cout << headerstrings[3] << "\n";
				cout << "[S] - Sine" << "\n"; //NOTE: ALLOW USER TO PICK WHETHER THEY WANT TO INPUT DEGREES OR RADIANS
				cout << "[C] - Cosine" << "\n";
				cout << "[T] - Tangent" << "\n";
				cout << "[P] - Pythagorean Theorem" << "\n";
				cout << "[L] - Law of Sines" << "\n";
				cout << "[O] - Law of Cosines" << "\n";
				cout << "\n" << displaystrings[0];
				cin >> choice_b;
				cout << "--------------------------------" << "\n";
				if (choice_b == 'S' || choice_b == 'T' || choice_b == 'T') {
					cout << "[D] - Input is in Degrees" << "\n";
					cout << "[R] - Input is in Radians" << "\n";
					cout << "\n" << "What is your input in?>";
					cin >> choice_c;
					cout << "--------------------------------" << "\n";
					switch(choice_c) {
						default:
							break;
					}
				}
				else {
					switch(choice_b) {
						default:
							break;
					}

				}
				break;
			case 'N':
				cout << headerstrings[4] << "\n";
				cout << "[B] - Convert Binary Number" << "\n";
				cout << "[O] - Convert Octal Number" << "\n";
				cout << "[D] - Convert Decimal Number" << "\n";
				cout << "[H] - Convert Hexadecimal Number" << "\n";
				cout << "\n" << displaystrings[0];
				cin >> choice_b;
				cout << "--------------------------------" << "\n";
				switch(choice_b) {
					default:
						break;
				}
				break;
			default:
				cout << displaystrings[1] << "\n";
				break;
		}
		cout << "--------------------------------" << "\n";
		cout << displaystrings[2];
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

double DegreesToRadians(double degrees) {
	double radians;
	radians = degrees * (pi/180.00);
	return radians;
}

double RadiansToDegrees(double radians) {
	double degrees;
	radians = radians * (180.00/pi);
	return degrees;
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
	double a,b,c,sqr;
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

double LawOfSines(char missing, double num1, double num2, double num3) {
	double a,b,A,B;
	switch(missing) {
		case 'a':
			b = num1;
			A = DegreesToRadians(num2);
			B = DegreesToRadians(num3);
			a = b * (sin(A)/sin(B));
			return a;
			break;
		case 'b':
			a = num1;
			A = DegreesToRadians(num2);
			B = DegreesToRadians(num3);
			b = a * (sin(B)/sin(A));
			return b;
			break;
		case 'A':
			a = num1;
			b = num2;
			B = DegreesToRadians(num3);
			A = asin((a*sin(B))/b);
			return A;
			break;
		case 'B':
			a = num1;
			b = num2;
			A = DegreesToRadians(num3);
			B = asin((b*sin(A))/a);
			return B;
			break;
		default:
			return 0.0;
			break;
	}
}

double LawOfCosines(char missing, double num1, double num2, double num3, double angle) {
	double a,b,c,sqr,radians;
	switch(missing) {
		case 'a':
			b = num1;
			c = num2;
			sqr = (2*b*c) * cos(DegreesToRadians(angle));
			a = sqrt(sqr);
			return a;
			break;
		case 'b':
			a = num1;
			c = num2;
			sqr = (2*a*c) * cos(DegreesToRadians(angle));
			b = sqrt(sqr);
			return b;
			break;
		case 'c':
			a = num1;
			b = num2;
			sqr = (2*a*b) * cos(DegreesToRadians(angle));
			c = sqrt(sqr);
			return c;
			break;
		default:
			return 0.0;
			break;
	}
}

double Perimeter(char shape, double val1, double val2, double val3, double val4) {
	double side = val1;
	double length = val1, width = val2;
	double tside1 = val1, tside2 = val2, tside3 = val3;
	double trside1 = val1, trside2 = val2, trside3 = val3, trside4 = val4;
	switch(shape) {
		case 's': //SQUARE
		case 'R': //RHOMBUS
			return side * 4;
			break;
		case 'r': //RECTANGLE
		case 'p': //PARALLELOGRAM
			return 2 * (length + width);
			break;
		case 't': //TRIANGLE
			return tside1 + tside2 + tside3;
			break;
		case 'T': //TRAPEZOID
			return trside1 + trside2 + trside3 + trside4;
			break;
		default:
			return 0;
			break;
	}
}

double Circumference(double radius) {
	return 2 * pi * radius;
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
		case 'c': //CIRCLE
			return pi * pow(radius, 2.0);
			break;
		case 's': //SQUARE
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
