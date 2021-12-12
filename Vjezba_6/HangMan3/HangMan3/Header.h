#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
#include<algorithm>
using namespace std;

class HangmanModel {
public:
    string movie;
    int lives = 9;
    bool inGame;
    string randomMovie(string path) {

        string movie;
        int randomLine = 0;
        vector<string> vect;
        ifstream reader(path);

        if (reader.is_open()) {
            while (getline(reader, movie)) {
                vect.push_back(movie);
            }
        }
        if (vect.size() != 0)
            randomLine = rand() % vect.size();

        if (randomLine < vect.size())
            movie = vect.at(randomLine);
        reader.close();
        return movie;
    };

};

class HangmanView {
public:
    void PrintMessage(string message, bool printTop = true, bool printBottom = true)
    {
        if (printTop)
        {
            cout << "+---------------------------------+" << endl;
            cout << "|";
        }
        else
        {
            cout << "|";
        }
        bool front = true;
        for (int i = message.length(); i < 33; i++)
        {
            if (front)
            {
                message = " " + message;
            }
            else
            {
                message = message + " ";
            }
            front = !front;
        }
        cout << message.c_str();

        if (printBottom)
        {
            cout << "|" << endl;
            cout << "+---------------------------------+" << endl;
        }
        else
        {
            cout << "|" << endl;
        }
    }
    void DrawHangman(int tries = 0)
    {
        if (tries >= 1)
            PrintMessage("|", false, false);
        else
            PrintMessage("", false, false);

        if (tries >= 2)
            PrintMessage("|", false, false);
        else
            PrintMessage("", false, false);

        if (tries >= 3)
            PrintMessage("O", false, false);
        else
            PrintMessage("", false, false);

        if (tries == 4)
            PrintMessage("/  ", false, false);

        if (tries == 5)
            PrintMessage("/| ", false, false);

        if (tries >= 6)
            PrintMessage("/|\\", false, false);
        else
            PrintMessage("", false, false);

        if (tries >= 7)
            PrintMessage("|", false, false);
        else
            PrintMessage("", false, false);

        if (tries == 8)
            PrintMessage("/  ", false, false);

        if (tries >= 9)
            PrintMessage("/ \\", false, false);
        else
            PrintMessage("", false, false);
    }
    void PrintLetters(string input, char from, char to)
    {
        string s;
        for (char i = from; i <= to; i++)
        {
            if (input.find(i) == string::npos)
            {
                s += i;
                s += " ";
            }
            else
                s += "  ";
        }
        PrintMessage(s, false, false);
    }
    void PrintAvailableLetters(string taken)
    {
        PrintMessage("Available letters");
        PrintLetters(taken, 'A', 'M');
        PrintLetters(taken, 'N', 'Z');
        PrintLetters(taken, '1', '9');
    }
    bool PrintWord(string word, string guessed)
    {
        bool won = true;

        string s, s1, s2, s3;
        for (int i = 0; i < word.length(); i++)
        {
            if (guessed.find(word[i]) != string::npos)
            {

                s += toupper(word[i]);
                s += " ";
            }

            else
            {
                if (word[i] == ' ') {
                    s += " ";
                }
                else if (word[i] == ':') {
                    s += ":";
                    bool won = true;
                }
                else if (word[i] == '\'') {
                    s += "'";
                    bool won = true;
                }
                else if (word[i] == '-') {
                    s += "-";
                    bool won = true;
                }
                else {
                    s += "_ ";
                    bool won = true;
                }
            }
        }
        if (word.length() >= 18) {
            if (word.length() >= 30) {
                s1 = s.substr(0, 15);
                s2 = s.substr(15, 30);
                s3 = s.substr(30, s.length());
                s2 = "-" + s2;
                s3 = "-" + s3;

                PrintMessage(s1, false, false);
                PrintMessage(s2, false, false);
                PrintMessage(s3, false);

            }
            else {
                s1 = s.substr(0, 18);
                s2 = s.substr(19, s.length());
                s2.insert(0, "-");
                PrintMessage(s1, false, false);
                PrintMessage(s2, false);
            }
        }
        else
            PrintMessage(s, false);
        return won;
    }
};

class HangmanController {
public:
    char userEntry() {
        char letter;
        cout << ">";
        cin >> letter;
        return tolower(letter);
    }

    string stringToLower(string word) {
        for (int i = 0; i < word.size(); i++) {
            word[i] = tolower(word[i]);
        }
        return word;

    };

    string stringToUpper(string word) {
        for (int i = 0; i < word.size(); i++) {
            word[i] = toupper(word[i]);
        }
        return word;

    };

    bool checkLetter(char letter, string movie) {
        bool isIn = false;
        for (int i = 0; i < movie.length(); i++) {
            if (letter == movie[i]) {
                isIn = true;
            }
        }
        return isIn;
    }

    void updateLives(bool check, int lives) {
        if (check == false) {
            lives--;
        }
    }

    string popLetters(string word, char letter) {
        vector<char> vect;
        string wordNew;
        for (int i = 0; i < word.size(); i++) {
            vect.push_back(word[i]);
        }

        for (int i = 0; i < word.size(); i++) {
            if (vect[i] != letter && vect[i] != ':' && vect[i] != '\'') {
                wordNew.push_back(vect[i]);
            }
        }

        return wordNew;
    }


};
