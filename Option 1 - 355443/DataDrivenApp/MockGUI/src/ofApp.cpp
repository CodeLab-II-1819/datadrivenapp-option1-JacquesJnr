#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	TextMain.load("Avenir.otf", 30);
	TextMenu.load("Avenir.otf", 9);
	TextBody.load("Avenir.otf", 16);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255);
	// Lines
	ofSetColor(51, 153, 255);
	ofDrawLine(0, 80 , 1024, 80); // Top line
	ofDrawLine(0, 100, 1024, 100); // Section line
	ofDrawLine(350, 80, 350, 768); // Left line
	ofDrawLine(420, 80, 420, 768); //Date line
	ofDrawLine(520, 80, 520, 768); // User line

	// Menu Text
	TextMain.drawString("Tweet Search", 40, 50);
	TextMenu.drawString("Queries:", 20, 95);
	TextMenu.drawString("Date:", 370, 95);
	TextMenu.drawString("User:", 455, 95);
	TextMenu.drawString("Tweet:", 540, 95);
	
	// Query Text
	TextBody.drawString("Uber Tweets", 10, 150);
	TextBody.drawString("Dreamworks Tweets", 10, 200);

	//Search Bar
	ofSetColor(183,183,183);
	ofDrawRectangle(880, 30, 130, 30);
	ofSetColor(255);
	TextMenu.drawString("Search", 890, 50);

	
}	