#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle("simulator");
	ofSetVerticalSync(true);
	ofSetFrameRate(60);

	ofxTrueTypeFontUC::setGlobalDpi(72);
	font.loadFont("Osaka.ttc", 100, true, true);
	font.setLineHeight(font.getFontSize() * 1.5f);

	gui.setup(); // most of the time you don't need a name
	gui.add(screenSize.setup("screen size", ofToString(ofGetWidth()) + "x" + ofToString(ofGetHeight())));

	bHide = false;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackgroundGradient(ofColor::white, ofColor::gray);

	ofSetColor(0);
	font.drawString("Hello, World.\nÇ±ÇÒÇ…ÇøÇÕÅAê¢äEÅB", 100, 200);

	if (!bHide) {
		gui.draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'h') {
		bHide = !bHide;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
	screenSize = ofToString(w) + "x" + ofToString(h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
