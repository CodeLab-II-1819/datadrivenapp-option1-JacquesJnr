#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

string myData;
string SearchData;
string search;
ifstream inFile;
size_t pos; // Size_t reffers to unassigned integer type of the result of the function "sizeof" in this case size_t represents the size of sampleTweets.csv
size_t keyword;

bool submenu;

int linecount = 0;
int userinput = 0;

vector<string> searchwords = { "congress", "abortion", "president", "immigration", "election" };

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
		"(4): How many tweets mention...",
		"(5): Tweets Mentioning Donald Trump",
		"(6): Tweets Mentioning Katy Perry",
		"(7): Tweets Mentioning Justin Bieber",
		"(8) Show retweets",
		"(9): Free Search Tweets",
		"(10): Total Number of tweets",
		"(11): Exit Program"};
		

	for (int i = 0; i < options.size(); i++) { // Prints the vector to console
		cout << options[i] << endl;
	}
	cout << endl;
		
}

void SubMenu() {
	int count = 0;

	cout << "Select an option to see how many tweets mention it" << endl;
	cout << endl;
	vector<string> suboptions = {
		"(1): Money",
		"(2): Politics",
		"(3): Food"
	};

	for (int i = 0; i < suboptions.size(); i++) {
		cout << suboptions[i] << endl;
	}

	cout << "Enter a number: " << endl;
	cin >> userinput;

	if (submenu = true && userinput == 1) // Trying to do a keyword search depending on user input
	{
		while (inFile.good()) { 
			getline(inFile, myData);
			keyword = myData.find(search);
			if (pos != string::npos) {
				cout << myData << endl;
				cout << endl;
				cout << "-------------------------------------------------------------------------------------------------------" << endl;
				cout << endl;
			}
		}
	}
}

void ShowText() {

	while (inFile.good()) { // If the file is open
		getline(inFile, myData); // Get all lines as the string variable myData
		pos = myData.find(search);
		if (pos != string::npos) { //If size_t has string varibles print sampleTweets.csv to console
			cout << myData << endl;
			cout << endl;
			cout << "-------------------------------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	inFile.close();
}

int main() {

	inFile.open("sampleTweets.csv"); //Open sampleTweets.csv
	submenu = false;

	if (!inFile) { // If the file isn't open print message
		cout << "Unable to open file" << endl;
	}

	do
	{

		MainMenu();
		cout << "Enter a number: " << endl;
		cin >> userinput;

		switch (userinput) // This switch statement controls the menu in the MainMenu() function
		{
		case 1:
			cout << "Searching for tweets involving Uber: " << endl;
			search = "Uber";
			break;
		case 2:
			cout << "Searching for tweets involving Dreamworks: " << endl;
			search = "Dreamworks";
			break;
		case 3:
			cout << "Searching for tweets involving Paris: " << endl;
			search = "Paris";
			break;
		case 4:
			SubMenu();
			submenu = true;
			break;
		case 5:
			cout << "Searching for tweets involving Donald Trump: " << endl;
			search = "Donald Trump";
			break;
		case 6:
			cout << "Searching for tweets involving Katy Perry: " << endl;
			search = "Katy Perry";
			break;
		case 7:
			cout << "Searching for tweets involving Justin Bieber: " << endl;
			search = "Justin Bieber";
			break;
		case 8:
			//Find a way to separate RT from tweets
		case 9:
			system("CLS");
			cout << "Insert a term to search: " << endl;
			cin >> search;
			break;
		case 10:
			while (getline(inFile, myData)) {
				linecount++;
			}
			system("CLS");
			cout << "The total number of tweets is: " << linecount << endl;
			cout << endl;
			break;
		case 11:
			return 0;
			break;
		default:
			cout << "Invalid number" << endl;
		}
	
		if(submenu = false)
		{
			ShowText();
		}
		inFile.open("sampleTweets.csv");
		
	} while (userinput !=11);

	system("pause");
}

/*
CODE DUMP


}

*/