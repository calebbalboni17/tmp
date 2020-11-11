// statenameandpercent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <array>
#include <vector>
#include <string>
using namespace std;
struct state
{
	double dem;
	double rep;
	string name;
};


void states (double republican, double democrat, string namestat)
{
	double added;
	double repdiv;
	double demdiv;
	
	added = republican + democrat;
	repdiv = republican / added;
	demdiv = democrat / added;
	cout << "this is the state of " << namestat << endl;
	cout << demdiv << "%" << endl;
	cout << repdiv << "%" << endl;
	if (demdiv > repdiv)
	{
		cout << "democrats have the majority :(" << endl;
	}
	if (repdiv > demdiv)
	{
		cout << "republicans have the majority :)" << endl;

	}
	if (demdiv == repdiv)
	{
		cout << "looks like its all tied up :]" << endl;
	}
	cout << endl;
	cout << endl;
}




int main()
{
	int enter;
	state info;
	info.rep;
	info.dem;
	info.name;

	vector <double> data;
	vector <string> names;
	ifstream file;
	file.open("Text.txt");
	int i = 0;
	int c = 1;
	int r = 0;
	while (!file.eof())
	{
		file >> info.name >> info.rep >> info.dem;
		data.push_back(info.rep);
		data.push_back(info.dem);
		names.push_back(info.name);
		
states(data[0],data[1],names[0])
		cout << data.size();
		
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
