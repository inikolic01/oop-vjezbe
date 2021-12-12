#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
#include<algorithm>
#include "Header.h"
using namespace std;

int main() {
	srand(time(0));
	int lives = 0, tries = 0;
	string input, guesses, movie;
	char letter;
	fstream file;
	file.open("Movie.txt");
	int count = 0;
	bool win = false;


	HangmanModel Model;
	HangmanController Cntr;
	HangmanView View;


	movie = Cntr.stringToLower(Model.randomMovie("Movie.txt"));
	input = Cntr.stringToLower(movie);
	input.erase(remove(input.begin(), input.end(), ' '));
	lives = Model.lives;

	while (lives != -1) {
		system("cls");

		View.PrintMessage("HANGMAN");
		View.DrawHangman(tries);
		View.PrintAvailableLetters(Cntr.stringToUpper(guesses));
		View.PrintMessage("GUESS!");
		win = View.PrintWord(movie, guesses);
		cout << Cntr.stringToUpper(guesses) << endl;

		if (lives == 0) {
			break;
		}

		if (input.size() != 0)
		{
			letter = Cntr.userEntry();
			guesses += letter;

			if (Cntr.checkLetter(letter, input)) {
				input = Cntr.popLetters(input, letter);
				count--;
			}
			else {
				lives--;
				tries++;
			}
		}
		else {
			break;
		}

	}

	if (lives == 0) {
		View.PrintMessage("YOU LOST!");
	}
	else {
		View.PrintMessage("YOU WON!");

	}


	file.close();
	return 0;
}