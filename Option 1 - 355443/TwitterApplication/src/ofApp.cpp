#include "ofApp.h"
#include <fstream>
#include <iostream>
#include <string>

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	string myData;
	ifstream inFile;
	inFile.open("sampleTweets.csv");
	ofSetColor(0);
	if (inFile.good()) {
		while (!inFile.eof()) {
			ofDrawBitmapString("File is Being read", 0, 100);
			getline(inFile, myData);
		}
		inFile.close();
	}
	else
	{
		ofDrawBitmapString("Error", 300, 300);
	}
}

