#include "gradeBook.h"
#include <iostream>
using namespace std;



gradeBook::gradeBook() {
	init();
}gradeBook::~gradeBook()
{}
void gradeBook::build() {
	cout << "Please Enter Name" << endl;
	cin.getline(sName[index], MAX_LENGTH - 1);
	cout << "Confirmed. Name: " << sName[index] << endl;                                 //VERIFICATION: TASK 0
	cout << "Please Enter the Email" << endl;
	cin.getline(sEmail[index], MAX_LENGTH - 1);
	cout << "Confirmed. Student Email: " << sEmail[index] << endl;                                     //VERIFICATION: TASK 0 
	cout << "Please Enter SID\n";                                     //VERIFICATION: TASK 0                                     
	cin.getline(sIDno[index], MAX_LENGTH - 1);
	cout << "Confirmed. Student ID: " << sIDno[index] << endl;
	cout << "Please enter the marks" << endl;
	cin >> sMarks[index];
	cout << "Confirmed." << sMarks[index] << endl;
	/*                                     cin.getline(sMarks[index], MAX_LENGTH - 1);
	cout << "Confirmed. Student Marks: " << sMarks[index] << endl;                                     */
	index++;                                     student = index; 
}
void gradeBook::display() {
	if (student > 0)
	{
		cout << "There are " << student << " Students Data\n";
		for (index = 0; index < student; index++)
		{
			cout << "Student " << index + 1 << ":\t"
				<< sName[index] << "\t" << sEmail[index] << "\t"
				<< sIDno[index] << "\t" << sMarks[index] << "\t" << endl;
		}
	}
	else {
	}
	/*                                     Stub:                                     //Show the data.
    cout << "data has been shown.\n";                                    
	*/
}
void gradeBook::format(char name[], char email[], char sID[]) {                                     //format the display.}
	void gradeBook::init() {                                     //initializing
		bool exitflag = false;
		while (!exitflag) {
			exitflag = menu();
		}
	}                                     bool gradeBook::menu() {
		char choice[1];                                     cout << "Menu" << endl;                                     //cout << "Do you want to enter the data right now?" << endl;    
					cout << "A. Enter data" << endl;                                    
					cout << "B. Display the data" << endl;										
					cout << "Q. Quit the app" << endl;                                    
					cin.getline(choice, 1)                                  
						if (choice == 'A')                                   
						{                                     	build();                                     }

									else if (choice == 'B') { display(); }
									else if (choice == 'Q') { return true; }
									else                                      	cout << "Wrong input! Please enter again!";                                                                          
									return false;
	}