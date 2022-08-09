/*
 Name of the file: Project File.cpp
 Name: Vishnu Varthan
 Reason of Program: For fun.
 Course: CMPSC
 */

#include<iostream>
#include<iomanip>
#include <string>
#include <fstream>
#include <ostream>
using namespace std;




void showIntroduction();
void showSecondIntroduction(string name);
void showMenu();
void optOne();
int optOneRun();
void optFour();
int optFourRun();
void showError();
void optTwo();
int optTwoRun();
void optThree();
int optThreeRun();


int main()
{
	// variable declaration
	string name;
	bool run = true;
	int opt;

	cout << "sample test here " << endl;
	showIntroduction();
	cout << "Enter your name?: ";
	cin >> name;
	system("CLS");
	showSecondIntroduction(name);
	system("pause");
	system("CLS");
	// Main loop goes here.
	// read main loop 
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
			system("CLS");
			optTwo();
		}
		if (opt == 3) {
			system("CLS");
			optThree();
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

void optTwo() {
	double grand_total= 0 ;
	double total_amount = 0;
	double total_sales = 0;
	string a;
	string b;
	ifstream infile("costs.txt");
	string* arra = new string[100];
	string* arrb = new string[100];
	double* taxes = new double[100];
	int counter = 0;
	// 6% tax by default 
	while (infile >> a >> b)
	{
		arra[counter] = a;// name 
		arrb[counter] = b;// price 
		counter++;

	}
	// make changes and calcs here 
	
	cout << "*****************************************************************************" << endl;
	cout << "* \t          S A L E S  R E C E I P T  F R O M                         *" << endl;
	cout << "*									    *" << endl;
	cout << "* \t                A  F I L E  P R O G R A M                           *" << endl;
	cout << "*										                                 *" << endl;
	cout << "*   This program will Print out a detailed receipt that will display ....   *" << endl;
	cout << "* \t1 : the name of item followed by price                              *" << endl;
	cout << "* \t2 : the total sales price                                           *" << endl;
	cout << "* \t3 : the amount of sales tax                                         *" << endl;
	cout << "* \t4 : the total purchase price                                        *" << endl;
	cout << "*****************************************************************************" << endl;
	
	system("pause");
	system("CLS");

	cout << "    Item Names                   Price            Tax      " << endl;
	cout << "-----------------------------------------------------------" << endl;
	// insert logic**
	cout << "names: " << endl;
	for (int i = 0; i < counter; i++) {
		cout << arra[i] << endl;
	}
	cout << "prices: " << endl;
	for (int i = 0; i < counter; i++) {
		// get the total for both
		total_amount += stod(arrb[i]);
		// get the tax array 
		double taxi = stod(arrb[i]);
		taxes[i] = taxi*0.06;
		total_sales += taxes[i];
		cout << arrb[i] << endl;
	}
	cout << "taxes: " << endl;
	for (int i = 0; i < counter; i++) {
		cout << taxes[i] << endl;
	}
	grand_total = total_amount + total_sales;
	cout << "-----------------------------------------------------------" << endl;

	cout << "    Total Sales                           $" << total_amount << endl;
	cout << "    Sales Tax                             $" << total_sales << endl;
	cout << "                             -----------    " << endl;
	cout << "    Grand Total                           $" << grand_total << endl;

	system("pause");


}

void optThree() {
	int start_amount = 0;
	int total_dep = 0;
	int dep_amount;
	int dep = 0;
	int wid = 0;
	int with_amount;
	int with = 0;
	int* deposits = new int[100];
	int* withd = new int[100];

	cout << "PLEASE READ THE FOLLOWING INSTRUCTIONS " << endl; 
	cout << "\nThis program will balance your checkbook. " << endl;

	cout << "\nEnter your beginning balance: $";
	cin >> start_amount;
	cout << "\nHow many deposits did you have the past month: ";
	cin >> dep_amount;
	for (int i = 0; i < dep_amount; i++) {
		dep = 0;
		cout << "Enter deposit number " << i + 1 << ": ";
		cin >> dep;
		total_dep += dep;
		deposits[i] = dep;

	}
	cout << endl;

	cout << "How many withdrawls did you have the past months: ";
	cin >> with_amount;
	for (int i = 0; i < with_amount; i++) {
		wid = 0;
		cout << "Enter withdrawl number " << i + 1 << ": ";
		cin >> wid;
		withd[i] = wid;
	}
	// get values now 
	int* balance = new int[100];
	balance[0] = start_amount + total_dep;
	
	cout << "#####################################################################################" << endl;
	cout << "################# C H E C K B O O K  B A L A N C E S H E E T ########################" << endl;
	cout << "#####################################################################################" << endl;
	cout << "*                                                                                   *" << endl;
	cout << "*																				     *" << endl;
	cout << "            DEPOSITS                     Withdrawls                    BALANCE	      " << endl;
	cout << "#####################################################################################" << endl;
	cout << "*                                                                                   *" << endl;
	for (int i = 0; i < dep_amount; i++) 
	{
		cout << "\t       " << deposits[i] << endl;
	}
	
	for (int i = 0; i < with_amount; i++) 
	{
		cout << " \t\t\t\t\t     " << withd[i] <<"\t\t" << endl;
	}
	
	for (int i = 0; i <= with_amount; i++)
	{
		balance[i + 1] = balance[i] - withd[i];
		cout << "\t\t\t\t\t\t\t\t\t " << balance[i] << "\t\t\t\t" << endl;
	}

	cout << "*                                                                                    *" << endl;
	cout << "*                                                                                    *" << endl;
	cout << "*                                                                                    *" << endl;
	cout << "*                                                                                    *" << endl;
	cout << "*                                                                                    *" << endl;
	cout << "*                                                                                    *" << endl;
	cout << "*                                                                                    *" << endl;
	cout << "######################################################################################" << endl;
	cout << "######################################################################################" << endl;


	string opt33;
	string opt44;
	cout << "Do you want to a copy of this balance sheet ?(y/n): " ;
	cin >> opt33;
	if(opt33 == "y" || opt33 == "Y"){
		std::ofstream ofs{"test.txt"}; 
	    auto cout_buff = std::cout.rdbuf(); 
	    std::cout.rdbuf(ofs.rdbuf()); 
	    std::cout.rdbuf(cout_buff);
	}
	cout << "Do you want to run this program again?(y/n): " ;
	cin >> opt44;
	if(opt44 == "y" || opt44 == "Y"){
		// rerun the program
		optThree();
	}else{
		showMenu();
	}

	cout << endl;
}

