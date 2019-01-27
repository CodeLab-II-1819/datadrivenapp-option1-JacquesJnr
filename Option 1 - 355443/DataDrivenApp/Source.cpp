#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string myData;
	string search = "Donald";
	ifstream inFile;
	inFile.open("sampleTweets.csv");

	if (!inFile) {
		cout << "Unable to open file" << endl;
		exit(1);
	}
	cout << "Enter word to search for: ";
	cin >> search;

	size_t pos;
	while (inFile.good()) {
		getline(inFile, myData);
		pos = myData.find(search);
		if (pos != string::npos) {
			cout << myData << endl;
		}
	}

	system("pause");
	return 0;
}