/*
 Name of the file: Project File.cpp
 Name: Vishnu Varthan
 Reason of Program: For fun.
 Course: CMPSC
 */

#include<iostream>
#include<iomanip>
#include <string>

using namespace std;

void showIntroduction();
void showSecondIntroduction(string name);
void showMenu();
void optOne();
int optOneRun();
void optFour();
int optFourRun();
void showError();



int main()
{
	// variable declaration
	string name;
	bool run = true;
	int opt;



	showIntroduction();
	cout << "Enter your name?: ";
	cin >> name;
	system("CLS");
	showSecondIntroduction(name);
	system("pause");
	system("CLS");
	// Main loop goes here.
	while (run)
	{
		
		showMenu();
		cout << "Enter your selection here: ";
		cin >> opt;
		if (opt == 0)
		{
			system("CLS");
			cout << "************************************************************" << endl;
			cout << "************************************************************" << endl;
			cout << "***************       T H A N K  Y O U      ****************" << endl;
			cout << "***************      C O M E  A G A I N     ****************" << endl;
			cout << "************************************************************" << endl;
			cout << "************************************************************" << endl;
			break;
		}
		if (opt == 1)
		{
			bool runOne = true;
			system("CLS");
			while (runOne)
			{
				optOne();
				system("pause");
				system("CLS");
				int result = optOneRun();
				if (result == 1) {
					system("CLS");
					break;
				}
			}
		}
		if (opt == 2) {

		}
		if (opt == 3) {

		}
		if (opt == 4) {
			system("CLS");
			optFourRun();
		}
		else {
			string opte;
			system("CLS");
			showError();
			cout << "Would you like to re-enter the main menu? (Y/N): ";
			cin >> opte;
			if (opte == "y" || opte == "Y") {
				system("CLS");
				continue;
			}
			else {
				break;
			}
			break;
		}
	}
}
//All functions defined here
void showIntroduction()
{
	cout << "********************************************" << endl;
	cout << "********************************************" << endl;
	cout << "*****                                  *****" << endl;
	cout << "*****\t\t W E L C O M E " << setw(8) << "\t       *****" << endl;
	cout << "*****                                  *****" << endl;
	cout << "*****\t\t T O   Y O U R " << setw(8) << "\t       *****" << endl;
	cout << "*****                                  *****" << endl;
	cout << "*****\t\t   F I N A L " << setw(8) << "\t       *****" << endl;
	cout << "*****                                  *****" << endl;
	cout << "*****\t\t P R O G R A M " << setw(8) << "\t       *****" << endl;
	cout << "*****                                  *****" << endl;
	cout << "********************************************" << endl;
	cout << "********************************************" << endl;
}

void showSecondIntroduction(string name)
{
	cout << "********************************************" << endl;
	cout << "********************************************" << endl;
	cout << "*****                                  *****" << endl;
	cout << "*****\t\t W E L C O M E " << setw(9) << "\t       *****" << endl;
	cout << "*****                                  *****" << endl;
	cout << "*****\t\t    " << setw(6) << name << setw(9) << "\t       *****" << endl; // Insert Name
	cout << "*****                                  *****" << endl;
	cout << "*****\t\t M A Y   T H E " << setw(9) << "\t       *****" << endl;
	cout << "*****                                  *****" << endl;
	cout << "*****\t\tC O M P U T E R " << setw(9) << "       *****" << endl;
	cout << "*****                                  *****" << endl;
	cout << "*****\t\tG O D S  H A V E " << setw(9) << "      *****" << endl;
	cout << "*****                                  *****" << endl;
	cout << "*****\t\t   M E R C Y " << setw(9) << "\t       *****" << endl;
	cout << "********************************************" << endl;
	cout << "********************************************" << endl;
}

void showMenu()
{
	cout << "************************************************************" << endl;
	cout << "************************************************************" << endl;
	cout << "******************   \t   C M P S C   \t     ***************" << endl;
	cout << "******************  F I N A L  P R O G R A M ***************" << endl;
	cout << "************************************************************" << endl;
	cout << "************************************************************" << endl;
	cout << "** OPTION                   DESCRIPTION" << "\t\t          **" << endl;
	cout << "**    1     Calculate sales tax on multiple sales items   **" << endl;
	cout << "**    2	    Calculate sales items from a file		  **" << endl;
	cout << "**    3	    Balance a checkbook				  **" << endl;
	cout << "**    4	    Conversion Utility				  **" << endl;
	cout << "**    0	    EXIT					  **" << endl;
	cout << "************************************************************" << endl;
	cout << "************************************************************" << endl;

}

void optOne()
{
	cout << "*****************************************************************************" << endl;
	cout << "* \t          S A L E S  R E C E I P T  P R O G R A M                   *" << endl;
	cout << "*                                                                           *" << endl;
	cout << "*   This program will Print out a detailed receipt that will display ....   *" << endl;
	cout << "* \t1 : the name of item followed by price                              *" << endl;
	cout << "* \t2 : the total sales price                                           *" << endl;
	cout << "* \t3 : the amount of sales tax                                         *" << endl;
	cout << "* \t4 : the total purchase price                                        *" << endl;
	cout << "*****************************************************************************" << endl;
}

int optOneRun() {
	// code for the option 
	bool prog = false;		// A declaration that checks the code to run it again by using boolean values (True/False).
	while (prog == false)
	{
		int counter;
		int items;
		double sales_items = 0;
		string sales_name;
		double sales_total = 0;
		double sales_tax = 0;
		double grand_total = 0;

		cout << "How many sales items do you have? :";
		cin >> items;

		counter = 1;

		double* sales_array = new double[items];// Dynamically allocate memory.
		string* sales_name_array = new string[items];

		while (counter <= items)
		{
			cout << "\nEnter in the name of the sales item " << counter << ": ";
			cin >> sales_name;
			cout << "Enter in the value of sales items " << counter << ": $";
			cin >> sales_items;
			sales_array[counter - 1] = sales_items;
			sales_name_array[counter - 1] = sales_name;
			sales_total = sales_total + sales_items;
			counter += 1;
		}

		cout << endl << endl;

		cout << "Enter in the sales tax percentage\n(Enter 10 for 10%): ";
		cin >> sales_tax;
		int sales_tax_print = sales_tax;
		sales_tax = sales_total * (sales_tax / 100);
		grand_total = sales_tax + sales_total;

		cout << endl << endl;

		cout << "********************************************" << endl;
		cout << "******* R E C I P T  O F  S A L E S  *******" << endl;
		cout << "********************************************" << endl;
		cout << "**                                        **" << endl;
		cout << setiosflags(ios::fixed) << setprecision(2);
		cout << "**  Item Names                   Price    **" << endl;
		cout << "--------------------------------------------" << endl;
		for (int i = 0; i < items; i++)
		{
			cout << "**  " << sales_name_array[i] << "\t" << " \t    $" << setw(9) << sales_array[i] << "    **" << endl;
		}
		cout << "**                                        **" << endl;
		cout << "**                                        **" << endl;
		cout << "********************************************" << endl;
		cout << "**                                        **" << endl;
		cout << "**                                        **" << endl;
		cout << "**  Total Sales             $" << setw(9) << sales_total << "    **" << endl;
		cout << "**  Sales Tax               $" << setw(9) << sales_tax << "    **" << endl;
		cout << "**                           -----------  **" << endl;
		cout << "**  Grand Total             $" << setw(9) << grand_total << "    **" << endl;
		cout << "**                                        **" << endl;
		cout << "**                                        **" << endl;
		cout << "********************************************" << endl;
		cout << "********************************************" << endl;
		cout << endl << endl;
		char ans;
		cout << "Do you want to run this program again? (Y/N): ";
		cin >> ans;

		if (ans == 'Y' || ans == 'y')
		{
			prog = false;
		}
		else if (ans == 'N' || ans == 'n')		// To run conditions in order to check if the user wants to run the program again or not.
		{
			prog = true;
			return 1;

		}
		delete[] sales_array;		// To not lose memory.
	}
}

void optFour()
{
	int ret = optFourRun();
	cout << ret;
}

int optFourRun() {
	int hour; // gives the hour for both
	int min; // gives the min for both
	// civ time
	string ctime;
	int ctimeh;
	int ctimem;
	string sect;
	// mil time
	string mtime;
	int mtimeh;
	int mtimem;
	// indep
	string choice;
	string fchoice;
	string Civilian;
	string Military;
	cout << "**************************************************************" << endl;
	cout << "**************************************************************" << endl;
	cout << "****          C O N V E R S I O N   U T I L I T Y         ****" << endl;
	cout << "****                                                      ****" << endl;
	cout << "****                                                      ****" << endl;
	cout << "****          Convert from Civilian to Military Time      ****" << endl;
	cout << "****             or from Military to Civilian Time        ****" << endl;
	cout << "****                                                      ****" << endl;
	cout << "****                                                      ****" << endl;
	cout << "****  Enter C for Civilian or M for Military: ";
	cin >> choice;
	cout << "****                                                      ****" << endl;
	cout << "****                                                      ****" << endl;
	cout << "****                                                      ****" << endl;
	if (choice == "C") {
		fchoice = "Civilian";
	}
	else {
		fchoice = "Military";
	}
	cout << "****  Enter your time in " << fchoice << "                         ****" << endl;
	cout << "****  Enter your hour: ";
	cin >> hour;
	cout << "****  Enter your minutes: ";
	cin >> min;
	if (choice != "M") {
		cout << "****  Enter either AM or PM: ";
		cin >> sect;
	}
	// algo for convertion 
	// from civ to milt
	if (choice == "C") {
		// civ ti milt
		if (sect == "AM") {
			// conditions 
			if (hour == 12) {
				mtimeh = 0;
				mtimem = min;
				if (min > 10) {
					ctime = to_string(hour) + ":" + to_string(min) + sect;
					mtime = to_string(mtimeh) + ":" + to_string(mtimem);
				}
				else {
					ctime = to_string(hour) + ":0" + to_string(min) + sect;
					mtime = to_string(mtimeh) + ":0" + to_string(mtimem);
				}

			}
			else {
				mtimeh = hour;
				mtimem = min;
				if (min > 10) {
					ctime = to_string(hour) + ":" + to_string(min) + sect;
					mtime = to_string(mtimeh) + ":" + to_string(mtimem);
				}
				else {
					ctime = to_string(hour) + ":0" + to_string(min) + sect;
					mtime = to_string(mtimeh) + ":0" + to_string(mtimem);
				}

			}
		}
		if (sect == "PM") {
			if (hour == 12) {
				mtimeh = 12;
				mtimem = min;
				if (min > 10) {
					ctime = to_string(hour) + ":" + to_string(min) + sect;
					mtime = to_string(mtimeh) + ":" + to_string(mtimem);
				}
				else {
					ctime = to_string(hour) + ":0" + to_string(min) + sect;
					mtime = to_string(mtimeh) + ":0" + to_string(mtimem);
				}


			}
			else {
				mtimeh = hour + 12;
				mtimem = min;
				if (min > 10) {
					ctime = to_string(hour) + ":" + to_string(min) + sect;
					mtime = to_string(mtimeh) + ":" + to_string(mtimem);
				}
				else {
					ctime = to_string(hour) + ":0" + to_string(min) + sect;
					mtime = to_string(mtimeh) + ":0" + to_string(mtimem);
				}
			}
		}
	}
	if (choice == "M") {
		// milt to civ 
		if (hour == 0) {
			ctimeh = 12;
			ctimem = min;
			ctime = to_string(ctimeh) + ":" + to_string(ctimem) + "AM";
			mtime = to_string(hour) + ":" + to_string(min);
		}
		else if (hour < 12) {
			ctimeh = hour;
			ctimem = min;
			ctime = to_string(ctimeh) + ":" + to_string(ctimem) + "AM";
			mtime = "0" + to_string(hour) + ":" + to_string(min);
		}
		else if (hour > 12) {
			ctimeh = hour - 12;
			ctimem = min;
			ctime = to_string(ctimeh) + ":" + to_string(ctimem) + "PM";
			mtime = to_string(hour) + ":" + to_string(min);
		}
	}
	cout << "****                                                      ****" << endl;
	cout << "****                                                      ****" << endl;
	cout << "****  Military Time =  " << mtime << "                              ****" << endl;
	cout << "****  Civilian Time =  " << ctime << "                             ****" << endl;
	cout << "****                                                      ****" << endl;
	cout << "****                                                      ****" << endl;
	cout << "**************************************************************" << endl;
	cout << "**************************************************************" << endl;

	string ans1;
	cout << "**** Would you like to run the program again? <Y/N>: ";
	cin >> ans1;

	if (ans1 == "y" || ans1 == "Y")
	{
		system("CLS");
		optFourRun();
		return 1;
	}
	else if (ans1 == "N" || ans1 == "n")		// To run conditions in order to check if the user wants to run the program again or not.
	{
		showMenu();
		system("CLS");
		return 0;
	}
}

void showError() {
	cout << "************************************************************" << endl;
	cout << "************************************************************" << endl;
	cout << "*****************      I N V A L I D      ******************" << endl;
	cout << "*****************        R E P L Y        ******************" << endl;
	cout << "************************************************************" << endl;
	cout << "************************************************************" << endl;
}
