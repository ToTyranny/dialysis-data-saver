#include <iostream>
#include <fstream>

using namespace std;

void beforeDialysis()
{

	fstream dataFile("DialysisData.csv", ios::in | ios::out | ios::app);
	if (!dataFile.is_open())
	{
		cout << "Error while opening the file!" << endl;
	}
	else
	{
		double preWeight;
		string preBloodPressure;
		int prePulse;
		double preTemp;
		int onePointFive;
		int twoPointFive;
		int fourPointTwoFive;

		cout << "Please enter the Pre-Blood Pressure: ";
		cin >> preBloodPressure;
		dataFile << preBloodPressure << ",";
		cout << endl;

		cout << "Please enter the Pre-Pulse: ";
		cin >> prePulse;
		dataFile << prePulse << ",";
		cout << endl;

		cout << "Please enter the Pre-Weight: ";
		cin >> preWeight;
		dataFile << preWeight << ",";
		cout << endl;

		cout << "Please enter the Pre-Temp: ";
		cin >> preTemp;
		dataFile << preTemp << ",";
		cout << endl;

		cout << "How many bags being used are 1.5%? ";
		cin >> onePointFive;
		dataFile << onePointFive << ",";
		cout << endl;

		cout << "How many bags being used are 2.5%? ";
		cin >> twoPointFive;
		dataFile << twoPointFive << ",";
		cout << endl;

		cout << "How many bags being used are 4.25%? ";
		cin >> fourPointTwoFive;
		dataFile << fourPointTwoFive << ",";
		cout << endl << endl;

		dataFile.close();
	}
	
}

void duringDialysis()
{

	fstream dataFile("DialysisData.csv", ios::in | ios::out | ios::app);
	if (!dataFile.is_open())
	{
		cout << "Error while opening the file!" << endl;
	}
	else
	{
		int initialDrain;
		int totalUF;
		string avgDwell;
		string lostDwell;

		cout << "Please enter the Initial Drain: ";
		cin >> initialDrain;
		dataFile << initialDrain << ",";
		cout << endl;

		cout << "Please enter the Total UF: ";
		cin >> totalUF;
		dataFile << totalUF << ",";
		cout << endl;

		cout << "Please enter the Average Dwell Time: ";
		cin >> avgDwell;
		dataFile << avgDwell << ",";
		cout << endl;

		cout << "Please enter the Lost Dwell Time: ";
		cin >> lostDwell;
		dataFile << lostDwell << ",";
		cout << endl << endl;

		dataFile.close();
	}
}

void afterDialysis()
{

	fstream dataFile("DialysisData.csv", ios::in | ios::out | ios::app);
	if (!dataFile.is_open())
	{
		cout << "Error while opening the file!" << endl;
	}
	else
	{
		double postWeight;
		string postBloodPressure;
		int postPulse;
		double postTemp;

		cout << "Please enter the Post-Blood Pressure: ";
		cin >> postBloodPressure;
		dataFile << postBloodPressure << ",";
		cout << endl;

		cout << "Please enter the Post-Pulse: ";
		cin >> postPulse;
		dataFile << postPulse << ",";
		cout << endl;

		cout << "Please enter the Post-Weight: ";
		cin >> postWeight;
		dataFile << postWeight << ",";
		cout << endl;

		cout << "Please enter the Post-Temp: ";
		cin >> postTemp;
		dataFile << postTemp << ",";
		cout << endl << endl;

		dataFile << endl;

		dataFile.close();
	}
}

int main()
{

	int userSelection;

	cout << "To enter stats before dialysis, enter 1" << endl;
	cout << "To enter stats during dialysis, enter 2" << endl;
	cout << "To enter stats after dialysis, enter 3" << endl;
	cout << "To enter all stats for a day of dialysis, enter 4" << endl;
	cin >> userSelection;
	cout << endl;
	if (userSelection == 1)
		{
			beforeDialysis();
		}
	if (userSelection == 2)
		{
			duringDialysis();
		}
	if (userSelection == 3)
		{
			afterDialysis();
		}
	if (userSelection == 4)
		{
			beforeDialysis();
			duringDialysis();
			afterDialysis();
		}
	return 0;
	}
	

	