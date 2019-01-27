#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;


void MainMenu() {
	// This function displays the main menu
	cout << "+++++++++++++++++++++++++++++++++" << endl;
	cout << "++++++++++++TwitterApp+++++++++++" << endl;
	cout << "+++++++++++++++++++++++++++++++++" << endl;
	cout << endl;
	cout << "Use numbers to navigate the menu: " << endl;
	cout << endl;
	vector<string> options = {
		"(1): Tweets Mentioning Uber",
		"(2): Tweets Mentioning Dreamworks",
		"(3): Tweets Mentioning Paris",
		"(4): How many Tweets mention...",
		"(5): Tweets Mentioning Donald Trump",
		"(6): Tweets Mentioning Katy Perry",
		"(7): Tweets Mentioning Justin Bieber",
		"(8) Show retweets",
		"(9): Free Search Tweets" };
		// 10: Search by date

	for (int i = 0; i < options.size(); i++) { // Prints the vector to console
		cout << options[i] << endl;
	}
	cout << endl;
		
}

void Continue() {
	// This function will display a menu at the end of a search query
}

int main() {
	string myData;
	string search;
	ifstream inFile;
	int userinput = 0;

	inFile.open("sampleTweets.csv"); //Open sampleTweets.csv

	if (!inFile) { // If the file isn't open print message
		cout << "Unable to open file" << endl;
		exit(1);
	}
	
	MainMenu();
	cout << "Enter a number: " << endl;
	cin >> userinput;
	if (!cin) {
		cout << "Error..." << endl;
		cout << "Enter a number: " << endl;
		cin >> userinput;
	}

	switch (userinput) // This switch statement controls the menu in the MainMenu() function
	{
	case 1:
		search = "Uber";
		break;
	case 2:
		search = "Dreamworks";
		break;
	case 3:
		search = "Paris";
		break;
	case 4:
		//Bring up sub-menu
		break;
	case 5:
		search = "Donald Trump";
		break;
	case 6:
		search = "Katy Perry";
		break;
	case 7:
		search = "Justin Bieber";
	case 8:
		//Find a way to separate RT from tweets
	default:
		break;
	}

	size_t pos; // Size_t reffers to unassigned integer type of the result of the function "sizeof" in this case size_t represents the size of sampleTweets.csv
	while (inFile.good()) { // If the file is open
		getline(inFile, myData); // Get all lines as the string variable myData
		pos = myData.find(search);
		if (pos != string::npos) { //If size_t has string varibles print sampleTweets.csv to console
			cout << myData << endl;
		}
	}


	system("pause");
	return 0;
}