//INCLUDE STATEMENTS
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

//ACTUAL CODE

//GLOBAL VALUES
const string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "November", "December"};

//FUNCTION PROTOTYPES
int MonthToNumber(string date);

//MAIN FUNCTION
int main() {
	bool exit=false;
	char exitchoice;
	string title,authornames,authorlastnames,url;
	string publicationdate;
	int publicationyear;
	cout << "~-WEBPAGE APA CITATION GENERATOR-~" << "\n";
	do {
		cout << "Enter url: ";
		//cin >> url;
		//REGULAR CIN SKIMS OVER THE PROGRAM IF THERE ARE SPACES ADDED
		getline(cin, url);
		cout << "Enter webpage title: ";
		//cin >> title;
		getline(cin, title);
		cout << "Enter author/s (FOLLOW THE APA STYLE, SEPARATE WITH COMMA): ";
		//cin >> authornames;
		getline(cin, authornames);
		cout << "Enter author/s last name/s (DO NOT INCLUDE FIRST NAME, SEPARATE WITH COMMA): ";
		//cin >> authorlastnames;
		getline(cin, authorlastnames);
		cout << "Enter publication date (TYPE 'n.d.' IF THE WEBPAGE DOES NOT HAVE ONE): ";
		//cin >> publicationdate;
		getline(cin, publicationdate);
		cout << "Enter publication year (TYPE 'n.d.' IF THE WEBPAGE DOES NOT HAVE ONE): ";
		cin >> publicationyear;
		cout << "\n" << "Your APA reference:" << "\n";
		cout << authornames << " (" << publicationdate << ") " << title << " Retrieved from " << url << "\n";
		cout << "\n" << "Your APA in-text citation:" << "\n";
		cout << "(" << authorlastnames << ", " << publicationyear << ")" << "\n";
		cout << "Would you like to exit the program? (Y/N): ";
		cin >> exitchoice;
		switch(exitchoice) {
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

//IMPORTANT FUNCTIONS

