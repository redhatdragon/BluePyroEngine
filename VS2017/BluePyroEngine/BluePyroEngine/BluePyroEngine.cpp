// BluePyroEngine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "graphics.h"


int main(int argc, char* argv[]){
	BPGraphicsSetup(600, 400);
	while (BPIsWindowRunning) {
		BPGraphicsUpdate();
	}
	BPGraphicsEnd();
    return 0;
}

