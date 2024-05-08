#include<iostream>
using namespace std;

class gradebook
{
public:
	gradebook(string inital_course);
	~gradebook();
	void displayMessage() const;
	void setCourse(string name);
private:
	string course_name
};
