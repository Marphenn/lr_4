#include <iostream>
#include <string>
#include "Football.h"

using namespace std;

int set_m_duration()
{
    int duration;
    while (1)
    {
        cout << "Enter match duration (minutes) : " << endl;
        cin >> duration;
        if (cin.fail() || duration < 30)
        {
            cout << "Incorrect value." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else return duration;
    }
}

int set_n_players()
{
    int n;
    while (1)
    {
        cout << "Enter the number of players in one team: " << endl;
        cin >> n;
        if (cin.fail() || n > 11 || n < 2)
        {
            cout << "Incorrect value." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else return n;
    }
}

int set_max_substitutions()
{
    int sub;
    while (1)
    {
        cout << "Enter the number of possible substitutions: " << endl;
        cin >> sub;
        if (cin.fail() || sub < 0 || sub > 5)
        {
            cout << "Incorrect value." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else return sub;
    }
}

int set_num_teams(const char* champ)
{
    int teams;
    while (1)
    {
        cout << "Enter the number of teams in "<< champ << ": " << endl;
        cin >> teams;
        if (cin.fail() || teams < 0 || teams > 40)
        {
            cout << "Incorrect value." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else return teams;
    }
}

int set_num_tours(const char* champ)
{
    int tours;
    while (1)
    {
        cout << "Enter the number of tours in " << champ << ": " << endl;
        cin >> tours;
        if (cin.fail() || tours < 0 || tours > 50)
        {
            cout << "Incorrect value." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else return tours;
    }
}

int set_position(const char* team, int max)
{
    int pos;
    while (1)
    {
        cout << "Enter the position of " << team << ": " << endl;
        cin >> pos;
        if (cin.fail() || pos < 0 || pos > max)
        {
            cout << "Incorrect value." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else return pos;
    }
}

void Football::getRules()
{
	cout << endl << "RULES:\n--- Match duration (min): " << m_duration << "\n--- Number of players in one team: " << n_players << "\n--- Possible substitutions: " << substitutions << endl;
}

void BPL::getBPLInfo()
{
    cout << endl << "BPL INFO:" << "\n--- Number of teams: " << n_teams << "\n--- Number of tours: " << n_tours << endl;
}

void Bundesliga::getBundesInfo()
{
    cout << endl << "BUNDESLIGA INFO:" << "\n--- Number of teams: " << n_teams << "\n--- Number of tours: " << n_tours << endl;
}

void ManCity::getManCityInfo()
{
    cout << endl << "MANCHESTER CITY INFO:" << "\n--- Current place in the table: " << position << endl;
}

void BorussiaD::getBorDInfo()
{
    cout << endl << "BORUSSIA DORTMUND INFO:" << "\n--- Current place in the table: " << position << endl;
}

void TransferPlayer::getPlayerInfo()
{
    system("CLS");
    cout << endl << "TRANSFER PLAYER INFO:\n--- Name: " << p_name << "\n--- Age: " << age << "\n--- Salary: " << salary << endl;
    getManCityInfo();
    getBPLInfo();
    getBorDInfo();
    getBundesInfo();
    getRules();
}

string getName()
{
    string n;
    bool p = 1;
    while (p)
    {
        cout << "\nEnter player's name: " << endl;
        rewind(stdin);
        getline(cin, n);
        p = 0;
        for (int i = 0; n[i] != 0; i++)
        {
            if (n[i] >= '0' && n[i] <= '9')
            {
                cout << "Error.";
                p = 1;
                break;
            }
        }
    }
    return n;
}

int getAge()
{
    int age;
    while (1)
    {
        cout << "\nEnter player's age: " << endl;
        cin >> age;
        if (cin.fail() || age > 50 || age < 15)
        {
            cout << "\nIncorrect value. Please, try again." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else return age;
    }
}

double getSalary()
{
    double salary;
    while (1)
    {
        cout << "\nEnter player's salary: " << endl;
        cin >> salary;
        if (cin.fail() || salary < 0)
        {
            cout << "Incorrect value. Please, try again." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else return salary;
    }
}
