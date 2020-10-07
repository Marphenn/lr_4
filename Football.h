#include <iostream>
#include <string>

using namespace std;

class Football {
private:
	int m_duration;
	int n_players;
	int substitutions;
	void f_rules_menu();
	void set_m_duration();
	void set_n_players();
	void set_max_substitutions();
protected:
	int choice(int);
public:
	Football()
		: m_duration(90), n_players(11), substitutions(3)
	{ };
	~Football() {
		cout << "\nFootball destroyed.\n";
	};
	void getRules();
	void setRules();
};


class BPL : public virtual Football
{
private:
	const char* country;
	int n_teams;
	int n_tours;
public:
	BPL(int teams = 20, int tours = 38)
		: country("England"), n_teams(teams), n_tours(tours)
	{
		//setRules();
	};
	~BPL()
	{
		cout << "\nBPL destroyed.\n";
	}
	void getInfo();
};


class Bundesliga : public virtual Football
{
private:
	const char* country;
	int n_teams;
	int n_tours;
public:

	Bundesliga(int teams = 18, int tours = 34)
		: country("Germany"), n_teams(teams), n_tours(tours)
	{
		//setRules();
	};
	~Bundesliga()
	{
		cout << "\nBundesliga destroyed.\n";
	}
	void getInfo();
};


class ManCity : private BPL
{
private:
	string coach;
	int position;
public:
	ManCity(string c = "Pep Guardiola", int p = 14)
		: coach(c), position(p)
	{};
	~ManCity()
	{
		cout << "\nManchester City destroyed.\n";
	}
	void getInfo();
};


class BorussiaD : private Bundesliga
{
private:
	string coach;
	int position;
public:
	BorussiaD(string c = "Lucien Favre", int p = 5)
		: coach(c), position(p)
	{};
	~BorussiaD()
	{
		cout << "\nBorussia Dortmund destroyed.\n";
	}
	void getInfo();
};


class TransferPlayer : private ManCity, private BorussiaD
{
private:
	string p_name;
	int age;
	double salary;
public:
	TransferPlayer(string n = "Sancho", int a = 20, double s = 38.500)
		: p_name(n), age(a), salary(s)
	{};
	~TransferPlayer()
	{
		cout << "Player " << p_name << " destroyed." << endl;
	}
	void getPlayerInfo();
};
