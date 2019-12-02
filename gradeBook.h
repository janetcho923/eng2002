// #include "gradeBookHandle.h"

class gradeBook {

private:

	#define MAX_LENGTH  256
	//For storing a string
	char sName[MAX_LENGTH][MAX_LENGTH];
	char sEmail[MAX_LENGTH][MAX_LENGTH];
	char sIDno[MAX_LENGTH][MAX_LENGTH];

	int sMarks[MAX_LENGTH];
	//char averageGrade[];
	int index = 0;
	int student = 0;
	// gradeBookHandle handler;

public:
	void init();
	void build();
	void display();
	void format(char name[], char email[], char sID[]);
	bool menu();
	gradeBook();
	~gradeBook();
};

