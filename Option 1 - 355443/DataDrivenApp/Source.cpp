#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

string myData;
string search;
ifstream inFile;
size_t pos; // Size_t reffers to unassigned integer type of the result of the function "sizeof" in this case size_t represents the size of sampleTweets.csv
// Testing branches

int linecount = 0;
int userinput = 0;
int secondinput = 0;

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
		"(4): How many Tweets mention Money",
		"(5): How many Tweets mention Politics",
		"(6): How many Tweets mention Food",
		"(7): Tweets Mentioning Donald Trump",
		"(8): Tweets Mentioning Katy Perry",
		"(9): Tweets Mentioning Justin Bieber",
		"(10) Show retweets",
		"(11): Free Search Tweets",
		"(12): Total Number of tweets",
		"(13): Exit Program"};
		

	for (int i = 0; i < options.size(); i++) { // Prints the vector to console
		cout << options[i] << endl;
	}
	cout << endl;
		
}

void GetTweets() {
	
	while (getline(inFile, myData)) {
		linecount++;
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
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			cout << "Searching for tweets involving Donald Trump: " << endl;
			search = "Donald Trump";
			break;
		case 8:
			cout << "Searching for tweets involving Katy Perry: " << endl;
			search = "Katy Perry";
			break;
		case 9:
			cout << "Searching for tweets involving Justin Bieber: " << endl;
			search = "Justin Bieber";
			break;
		case 10:
			//Find a way to separate RT from tweets
		case 11:
			system("CLS");
			cout << "Insert a term to search: " << endl;
			cin >> search;
			break;
		case 12:
			while (getline(inFile, myData)) {
				linecount++;
			}
			system("CLS");
			cout << "The total number of tweets is: " << linecount << endl;
			cout << endl;
			break;
		case 13:
			return 0;
			break;
		default:
			cout << "Invalid number" << endl;
		}
	
		ShowText();
		inFile.open("sampleTweets.csv");
		
	} while (userinput !=13);

	system("pause");
}

/*
CODE DUMP

void SubMenu() {
	int count;

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
}

*/