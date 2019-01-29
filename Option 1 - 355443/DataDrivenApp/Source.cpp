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

bool submenu; // A boolean to check if the sub-menu is open

int linecount = 0;
int userinput = 0;

vector<string> money = { "$", "cash", "money", "Cash", "Money" }; // Keywords I use to identigy if a tweet mentions money
vector<string> politics = { "congress","Congress","abortion","Abortion","president","President","immigration","Immigration", "election", "Election" }; // Keywords I use to identigy if a tweet mentions politics
vector<string> food = {"food","Food", "yum","Yum", "#FoodFriday", "cook", "Cook"}; // Keywords I use to identigy if a tweet mentions food
vector<string> vulgar = { "fuck", "Fuck", "phuck", "FUCK", "shit", "Shit", "SHIT", "bitch", "Bitch", "BITCH" ,"bitchez", "Bitchez" }; // Don't ask


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
		"(8): Free Search Tweets",
		"(9): Total Number of tweets",
		"(10): Exit Program"};
		

	for (int i = 0; i < options.size(); i++) { // Prints the vector to console
		cout << options[i] << endl;
		cout << "-------------------------------------" << endl;
	}
	cout << endl;
		
}

void SubMenu() { // This function displays the sub-menu and takes in a users input
	

	cout << "Select an option to see how many tweets mention it" << endl;
	cout << endl;
	vector<string> suboptions = {
		"(1): Money",
		"(2): Politics",
		"(3): Food",
		"(4): Swear Words"
	};

	for (int i = 0; i < suboptions.size(); i++) {
		cout << suboptions[i] << endl;
		cout << "----------------" << endl;
	}

	cout << "Enter a number: " << endl;
	cin >> userinput;
	cout << endl;
}

void Money() { // This function counts the number of tweets that mention money based off the keywords vector
	int counter = 0;

	while (!inFile.eof()) {
		getline(inFile, SearchData); 
		if (SearchData.find(money[0]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(money[1]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(money[2]) != SearchData.npos) {
			counter++;
		}
	}
	inFile.close();
	cout << "The number of tweets that mention money is: " << counter << endl;
	cout << endl;
}

void Politics() { // This function counts the number of tweets that mention politics based off the keywords vector
	int counter = 0;

	while (!inFile.eof()) {
		getline(inFile, SearchData); 
		if (SearchData.find(politics[0]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(politics[1]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(politics[2]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(politics[3]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(politics[4]) != SearchData.npos) {
			counter++;
		}
	}
	inFile.close();
	cout << "The number of tweets that mention politics is: " << counter << endl;
	cout << endl;
}

void Food() { // This function counts the number of tweets that mention food based off the keywords vector
	int counter = 0;

	while (!inFile.eof()) { 
		getline(inFile, SearchData); 
		if (SearchData.find(food[0]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(food[1]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(food[2]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(food[3]) != SearchData.npos) {
			counter++;
		}
	}
	inFile.close();
	cout << "The number of tweets that mention food is: " << counter << endl;
	cout << endl;
}

void ColourfulLanguage() { // This function counts the number of tweets that have swear words in them, I had to manually look for these keywords in the sampleTweets file
	int counter = 0;

	while (!inFile.eof()) {
		getline(inFile, SearchData);
		if (SearchData.find(vulgar[0]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[1]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[2]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[3]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[4]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[5]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[6]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[7]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[8]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[9]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[10]) != SearchData.npos) {
			counter++;
		}
		if (SearchData.find(vulgar[11]) != SearchData.npos) {
			counter++;
		}
	}
	inFile.close();
	cout << "The number of tweets that have colourful language is: " << counter << endl;
	cout << endl;
}

void ShowText() { // This function is used to print the queried tweets to console

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
	submenu = false; // By default the sub-menu isn't open

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
			ShowText();
			break;
		case 2:
			cout << "Searching for tweets involving Dreamworks: " << endl;
			search = "Dreamworks";
			ShowText();
			break;
		case 3:
			cout << "Searching for tweets involving Paris: " << endl;
			search = "Paris";
			ShowText();
			break;
		case 4:
			system("CLS"); // Clear the console
			submenu = true;
			SubMenu();
			if (userinput == 1 && submenu) { // These if statments check the user's input for the sub-menu and executes the respective function so long as the submenu is active
				Money();
			}
			if (userinput == 2 && submenu) {
				Politics();
			}
			if (userinput == 3 && submenu) {
				Food();
			}
			if (userinput == 4 && submenu) {
				ColourfulLanguage();
			}
			if (userinput >= 5) {
				cout << "Invalid input..try again" << endl;
			}
			break;
		case 5:
			cout << "Searching for tweets involving Donald Trump: " << endl;
			search = "Donald Trump";
			ShowText();
			break;
		case 6:
			cout << "Searching for tweets involving Katy Perry: " << endl;
			search = "Katy Perry";
			ShowText();
			break;
		case 7:
			cout << "Searching for tweets involving Justin Bieber: " << endl;
			search = "Justin Bieber";
			ShowText();
			break;
		case 8:
			system("CLS");
			cout << "Insert a term to search: " << endl;
			cin >> search;
			ShowText();
			break;
		case 9:
			while (getline(inFile, myData)) {
				linecount++;
			}
			system("CLS");
			cout << "The total number of tweets is: " << linecount << endl;
			cout << endl;
			break;
		case 10:
			return 0;
			break;
		default:
			cout << "Invalid number" << endl;
		}

		inFile.open("sampleTweets.csv");
		
	} while (userinput !=10);

	system("pause");
}