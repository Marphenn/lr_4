#include <iostream>
#include <string>
#include "Football.h"

using namespace std;

string getName();
int getAge();
double getSalary();

int main()
{
	string name = getName();
	int age = getAge();
	double salary = getSalary();
	TransferPlayer *p1=new TransferPlayer(name,age,salary);
	p1->getPlayerInfo();
	delete p1;

	return 0;
}
