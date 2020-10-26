#include <iostream>
#include "Football.h"

using namespace std;

int set_m_duration();
int set_n_players();
int set_max_substitutions();

int set_num_teams(const char*);
int set_num_tours(const char*);

int set_position(const char*, int);

string getName();
int getAge();
double getSalary();

int main()
{
	int dur = set_m_duration();
	int pl = set_n_players();
	int subs = set_max_substitutions();
	int BPLteams = set_num_teams("BPL");
	int BPLtours = set_num_tours("BPL");
	int BundesTeams = set_num_teams("BUNDESLIGA");
	int BundesTours = set_num_tours("BUNDESLIGA");
	int MCpos = set_position("Manchester City", BPLteams);
	int BorDpos = set_position("Borussia Dortmund", BundesTeams);
	string name = getName();
	int age = getAge();
	double salary = getSalary();

	TransferPlayer p1(dur, pl, subs, BPLteams, BPLtours, MCpos, BundesTeams, BundesTours, BorDpos, name, age, salary);
	p1.getPlayerInfo();

	return 0;
}
