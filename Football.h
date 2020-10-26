#include <iostream>
#include <string.h>

using namespace std;

class Football {
private:
	int m_duration;
	int n_players;
	int substitutions;

public:
	Football(int dur = 90, int players = 11, int subs = 3)
		: m_duration(dur), n_players(players), substitutions(subs)
	{ };
	~Football() {
		cout << "\nFootball destroyed.\n";
	};
	void getRules();
};


class BPL : virtual public Football
{
private:
	int n_teams;
	int n_tours;
public:
	BPL(int dur = 90, int players = 11, int subs = 3, int teams = 20, int tours = 38)
		: Football(dur, players, subs), n_teams(teams), n_tours(tours)
	{};
	~BPL()
	{
		cout << "\nBPL destroyed.\n";
	}
	void getBPLInfo();
};


class Bundesliga : virtual public Football
{
private:
	int n_teams;
	int n_tours;
public:

	Bundesliga(int dur = 90, int players = 11, int subs = 3, int teams = 18, int tours = 34)
		: Football(dur, players, subs), n_teams(teams), n_tours(tours)
	{};
	~Bundesliga()
	{
		cout << "\nBundesliga destroyed.\n";
	}
	void getBundesInfo();
};

class ManCity : public BPL
{
private:
	int position;
public:
	ManCity(int dur = 90, int players = 11, int subs = 3, int teams = 20, int tours = 38, int p = 14)
		: BPL(dur, players, subs, teams, tours), position(p)
	{};
	~ManCity()
	{
		cout << "\nManchester City destroyed.\n";
	}
	void getManCityInfo();
};

class BorussiaD : public Bundesliga
{
private:
	int position;
public:
	BorussiaD(int dur = 90, int players = 11, int subs = 3, int teams = 18, int tours = 34, int p = 5)
		: Bundesliga(dur, players, subs, teams, tours), position(p)
	{};
	~BorussiaD()
	{
		cout << "\nBorussia Dortmund destroyed.\n";
	}
	void getBorDInfo();
};

class TransferPlayer : public ManCity, public BorussiaD
{
private:
	string p_name;
	int age;
	double salary;
public:
	TransferPlayer(int dur = 90, int players = 11, int subs = 3, int teams1 = 20, int tours1 = 38, int p1 = 14, int teams2 = 18, int tours2 = 34, int p2 = 5, string n = "Sancho", int a = 20, double s = 38.500)
		: Football(dur, players, subs), ManCity(dur, players, subs, teams1, tours1, p1), BorussiaD(dur, players, subs, teams2, tours2, p2), p_name(n), age(a), salary(s)
	{};
	~TransferPlayer()
	{
		cout << "Player " << p_name << " destroyed." << endl;
	}
	void getPlayerInfo();
};
