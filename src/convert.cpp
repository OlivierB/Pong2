#include <iostream>
#include <string>
// Nécessaire aux flux
#include <sstream>
// Header
#include "../include/convert.hpp"

using namespace std;

// passer sa variable de std::string a cont char*
const char* stringToConstChar(std::string stringName) {
    const char* charName = NULL;
    charName = stringName.c_str();
    return charName;
}

// passage int vers string
std::string intToString(int value) {
    // créer un flux de sortie
    ostringstream ossValue;
    // écrire un nombre dans le flux
    ossValue << value;
    // récupérer une chaîne de caractères
    string text = ossValue.str();
    return text;
}


std::string floatToString(float value) {
    // créer un flux de sortie
    ostringstream ossValue;
    // écrire un nombre dans le flux
    ossValue  << value;
    // récupérer une chaîne de caractères
    string text = ossValue.str();

    return text;
}


int stringToInt(string text) {
	if(!text.empty()) {
		// creer un flux à  partir de la chaine a  convertir
		istringstream iss(text);
		// convertir en un int
		int nomber;
		iss >> nomber;
		return nomber;
	} else  {
		return -1;
	}
}


float stringToFloat(string text) {
	if(!text.empty()) {
		// creer un flux à  partir de la chaine a  convertir
		istringstream iss(text);
		// convertir en un float
		float nomber;
		iss >> nomber;
		return nomber;
	} else {
		return -1;
	}
}

