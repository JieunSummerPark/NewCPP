#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

class Hangman {
	string progress[64];
	string problem;
	string answer;
	string guessed;
	int nTries;
	const int maxTries = 7;

	void load(char* progName = "HangmanProgress.txt") {
		ifstream fs(progName);
		if (fs) {
			getline(fs, progress[0]);
			for (int i = 0; i < 64; i++)
				getline(fs, progress[i]);
		}
	}
};