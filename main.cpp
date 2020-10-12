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
	TransferPlayer *p1=new TransferPlayer(name, age, salary);
	p1->setRules(); 
	p1->getRules();
	p1->BPLInfo();
	p1->ManCityInfo();
	p1->BundesInfo();
	p1->BorDInfo();
	p1->getPlayerInfo();
	
	delete p1;

	return 0;
}
