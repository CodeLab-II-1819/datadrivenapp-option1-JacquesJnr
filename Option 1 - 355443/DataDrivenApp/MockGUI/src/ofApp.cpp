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
	ofDrawLine(0, 175, 1024, 175); // Item Line 1
	ofDrawLine(0, 225, 1024, 225); // Item Line 2
	ofDrawLine(0, 275, 1024, 275); // Item Line 3
	ofDrawLine(0, 325, 1024, 325); // Item Line 4
	ofDrawLine(0, 375, 1024, 375); // Item Line 5
	ofDrawLine(0, 425, 1024, 425); // Item Line 6
	ofDrawLine(0, 475, 1024, 475); // Item Line 7
	ofDrawLine(0, 525, 1024, 525); // Item Line 8
	ofDrawLine(0, 575, 1024, 575); // Item Line 9
	ofDrawLine(0, 625, 1024, 625); // Item Line 10
	ofDrawLine(0, 675, 1024, 675); // Item Line 11
	ofDrawLine(0, 725, 1024, 725); // Item Line 12

	// Menu Text
	TextMain.drawString("Tweet Search", 40, 50);
	TextMenu.drawString("Queries:", 20, 95);
	TextMenu.drawString("Date:", 370, 95);
	TextMenu.drawString("User:", 455, 95);
	TextMenu.drawString("Tweet:", 540, 95);

	// Grey Panel
	ofSetColor(229);
	ofDrawRectangle(0, 101, 349, 668);

	//Tick Boxes
	ofSetColor(0);
	ofDrawLine(300, 130, 300, 150); // Box 1
	ofDrawLine(300, 150, 320, 150);
	ofDrawLine(320, 150, 320, 130); 
	ofDrawLine(320, 130, 300, 130); 

	ofDrawLine(300, 180, 300, 200); // Box 2
	ofDrawLine(300, 200, 320, 200);
	ofDrawLine(320, 200, 320, 180);
	ofDrawLine(320, 180, 300, 180);

	ofDrawLine(300, 230, 300, 250); // Box 3
	ofDrawLine(300, 250, 320, 250);
	ofDrawLine(320, 250, 320, 230);
	ofDrawLine(320, 230, 300, 230);

	ofDrawLine(300, 280, 300, 300); // Box 4
	ofDrawLine(300, 300, 320, 300);
	ofDrawLine(320, 300, 320, 280);
	ofDrawLine(320, 280, 300, 280);

	ofDrawLine(300, 330, 300, 350); // Box 5
	ofDrawLine(300, 350, 320, 350);
	ofDrawLine(320, 350, 320, 330);
	ofDrawLine(320, 330, 300, 330);

	ofDrawLine(300, 380, 300, 400); // Box 6
	ofDrawLine(300, 400, 320, 400);
	ofDrawLine(320, 400, 320, 380);
	ofDrawLine(320, 380, 300, 380);

	ofDrawLine(300, 430, 300, 450); // Box 7
	ofDrawLine(300, 450, 320, 450);
	ofDrawLine(320, 450, 320, 430);
	ofDrawLine(320, 430, 300, 430);

	ofDrawLine(300, 480, 300, 500); // Box 8
	ofDrawLine(300, 500, 320, 500);
	ofDrawLine(320, 500, 320, 480);
	ofDrawLine(320, 480, 300, 480);

	ofDrawLine(300, 530, 300, 550); // Box 9
	ofDrawLine(300, 550, 320, 550);
	ofDrawLine(320, 550, 320, 530);
	ofDrawLine(320, 530, 300, 530);

	ofDrawLine(300, 580, 300, 600); // Box 10
	ofDrawLine(300, 600, 320, 600);
	ofDrawLine(320, 600, 320, 580);
	ofDrawLine(320, 580, 300, 580);

	ofDrawLine(300, 630, 300, 650); // Box 11
	ofDrawLine(300, 650, 320, 650);
	ofDrawLine(320, 650, 320, 630);
	ofDrawLine(320, 630, 300, 630);

	ofDrawLine(300, 680, 300, 700); // Box 12
	ofDrawLine(300, 700, 320, 700);
	ofDrawLine(320, 700, 320, 680);
	ofDrawLine(320, 680, 300, 680);

	// Query Text
	ofSetColor(51, 153, 255);
	TextBody.drawString("Uber Tweets", 10, 150);
	TextBody.drawString("Dreamworks Tweets", 10, 200);
	TextBody.drawString("Paris Tweets", 10, 250);
	TextBody.drawString("Count Money Tweets", 10, 300);
	TextBody.drawString("Count Politics Tweets", 10, 350);
	TextBody.drawString("Count Food Tweets", 10, 400);
	TextBody.drawString("Count Vulgar Tweets", 10, 450);
	TextBody.drawString("Donald Trump", 10, 500);
	TextBody.drawString("Katy Perry", 10, 550);
	TextBody.drawString("Justin Bieber", 10, 600);
	TextBody.drawString("Search By Date", 10, 650);
	TextBody.drawString("Count Total Tweets", 10, 700);

	//Search Bar
	ofSetColor(183,183,183);
	ofDrawRectangle(880, 30, 130, 30);
	ofSetColor(255);
	TextMenu.drawString("Search", 890, 50);

	
}	