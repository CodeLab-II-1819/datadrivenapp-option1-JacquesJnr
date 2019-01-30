#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofImage image;
		ofTrueTypeFont TextMain;
		ofTrueTypeFont TextMenu;
		ofTrueTypeFont TextBody;
};
