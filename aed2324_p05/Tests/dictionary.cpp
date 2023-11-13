#include <iostream>
#include <string>
#include <fstream>
#include "dictionary.h"

using namespace std;

WordMean::WordMean(string w, string m): word(w), meaning(m) {}

string WordMean::getWord() const {
    return word;
}

string WordMean::getMeaning() const {
    return meaning;
}

void WordMean::setMeaning(string m) {
    meaning = m;
}

void WordMean::setWord(string w) {
    word = w;
}

set<WordMean> Dictionary::getWords() const {
	return words;
}

void Dictionary::addWord(WordMean wm)  {
    words.insert(wm);
}


//=============================================================================
// Exercise 1: Dictionary
//=============================================================================
//TODO
bool WordMean::operator< (const WordMean& wm2) const {
     return word < wm2.word;
}

//=============================================================================
// Subexercise 1.1: Create Dictionary
//=============================================================================
//TODO
void Dictionary::readFile(ifstream &f) {
    string word, meaning;
    set<WordMean> words;
    while (getline(f, word) && getline(f, meaning)) {
        WordMean wm(word, meaning);
        words.insert(wm);
    }
    for (auto& wm: words) {
        addWord(wm);
    }
}

//=============================================================================
// Subexercise 1.2: Print Dictionary
//=============================================================================
//TODO
void Dictionary::print() const {
    for (auto& wm: words) {
        cout << wm.getWord() << endl;
        cout << wm.getMeaning() << endl;
    }
}

//=============================================================================
// Subexercise 1.3: Consult Dictionary
//=============================================================================
//TODO
string Dictionary::consult(string w1, WordMean& previous, WordMean& next) const {
    for (auto& wm : words) {
        if (w1 == wm.getWord()) {
            return wm.getMeaning();
        } else if (wm.getWord() < w1) {
            previous = wm;
        } else if (wm.getWord() > w1) {
            next = wm;
            break;
        }
    }
    if (previous.getWord() == "") {
        previous.setWord("");
        previous.setMeaning("");
    }
    if (next.getWord() == "") {
        next.setWord("");
        next.setMeaning("");
    }
    return "word not found";
}


//=============================================================================
// Subexercise 1.4: Update Dictionary
//=============================================================================
//TODO
bool Dictionary::update(string w1, string m1) {
    for(WordMean wm: words) {
        if(wm.getWord() == w1) {
            wm.setMeaning(m1);
            return true;
        }
    }
    WordMean wm = WordMean(w1, m1);
    words.insert(wm);
    return false;
}

