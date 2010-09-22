/**
 * Fonction pour gérer le changement de type de variable (avec les flux)
 * @date 19/06/2010
 */

#ifndef FLUX_HPP_INCLUDED
#define FLUX_HPP_INCLUDED

/**
 * Passage d'une chaine de caractères à un tableau de char
 * @param string
 * @return char*
 */
const char* stringToConstChar(std::string);

/**
 * Passage d'un entier à une chaine de caractères
 * @param int
 * @return string
 */
std::string intToString(int);

/**
 * Passage d'un flottant à une chaine de caractères
 * @param float
 * @return string
 */
std::string floatToString(float);

/**
 * Passage d'une chaine de caractères à un entier
 * @param string
 * @return int
 */
int stringToInt(std::string);

/**
 * Passage d'une chaine de caractères à un flottant
 * @param string
 * @return float
 */
float stringToFloat(std::string);

#endif // FLUX_HPP_INCLUDED
