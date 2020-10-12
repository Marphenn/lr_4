#include <iostream>
#include <string>
#include "Football.h"

using namespace std;

string getName()
{
    string n;
    bool p = 1;
    while (p)
    {
        cout << "\nEnter player's name: " << endl;
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
        rewind(stdin);
    }
    cout << "Your name: " << n << endl;
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
        else
        {
            cin.ignore(32767, '\n');
            return age;
        }
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
        else
        {
            cin.ignore(32767, '\n');
            return salary;
        }
    }
    
}

void Football::getRules()
{
	cout << endl << "RULES:\n--- Match duration (min): " << m_duration << "\n--- Number of players in one team: " << n_players << "\n--- Possible substitutions: " << substitutions << endl;
}

void f_rules_menu()
{
    cout << "\nWhat part of rules do you want to change?\n1 --- Match duration\n2 --- Number of players in one team\n3 --- Number of possible substitutions\n-1 --- Exit\n";
}

int choice(int n_variants = 3)
{
    int choice;
    while (1)
    {
        cin >> choice;
        if (cin.fail() || (choice > 3 || choice < 1) && choice != -1)
        {
            cout << "Incorrect value." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else return choice;
    }
}

int set_m_duration()
{
    int duration;
    while (1)
    {
        cout << "Enter new match duration (minutes) : " << endl;
        cin >> duration;
        if (cin.fail() || duration < 30)
        {
            cout << "Incorrect value." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else break;
    }
   return duration;
}

int set_n_players()
{
    int n;
    while (1)
    {
        cout << "Enter new number of players in one team: " << endl;
        cin >> n;
        if (cin.fail() || n > 11 || n < 2)
        {
            cout << "Incorrect value." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else break;
    }
    return n;
}

int set_max_substitutions(int players)
{
    int sub;
    while (1)
    {
        cout << "Enter new number of possible substitutions: " << endl;
        cin >> sub;
        if (cin.fail() || sub <0 || sub > players-1)
        {
            cout << "Incorrect value." << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else break;
    }
   return sub;
}

void Football::setRules()
{
    while (1)
    {
        f_rules_menu();
        int c = choice();
        switch (c)
        {
        case 1: m_duration = set_m_duration(); break;
        case 2: n_players = set_n_players(); break;
        case 3: substitutions = set_max_substitutions(n_players); break;
        default: break;
        }
        if (c == -1) break;
        system("CLS");
    }
}

void BPL::BPLInfo()
{
    cout << endl << "BPL INFO:\n--- Country: " << country << "\n--- Number of teams: " << n_teams << "\n--- Number of tours: " << n_tours << endl;
}

void Bundesliga::BundesInfo()
{
    cout << endl << "BUNDESLIGA INFO:\n--- Country: " << country << "\n--- Number of teams: " << n_teams << "\n--- Number of tours: " << n_tours << endl;
}

void ManCity::ManCityInfo()
{
    cout << endl << "MANCHESTER CITY INFO:\n--- Coach: " << coach << "\n--- Current place in the table: " << position << endl;
}

void BorussiaD::BorDInfo()
{
    cout << endl << "BORUSSIA DORTMUND INFO:\n--- Coach: " << coach << "\n--- Current place in the table: " << position << endl;
}

void TransferPlayer::getPlayerInfo()
{
    cout << endl << "TRANSFER PLAYER INFO:\n--- Name: " << p_name << "\n--- Age: " << age << "\n--- Salary: " << salary << endl;
}

