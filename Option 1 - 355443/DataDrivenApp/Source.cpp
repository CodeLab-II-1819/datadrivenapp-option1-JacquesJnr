#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string myData;
	string search;
	ifstream inFile;
	inFile.open("sampleTweets.csv");

	size_t pos;
	while (inFile.good()) {
		getline(inFile, myData);
		pos = myData.find(search);
		if (pos != string::npos) {
			cout << "Found" << endl;
		}
		else
		{
			cout << "Nothing Found" << endl;
		}
	}



	system("pause");
	return 0;
}