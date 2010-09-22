#ifndef COMMANDLINEREADER_HPP_INCLUDED
#define COMMANDLINEREADER_HPP_INCLUDED

/**
 * Permet de récuperer les paramètres de la ligne de commande
 * @param int argc
 * @param char* argv[]
 * @param string fileName
 * @param int speed
 */
void getParamProgram(int argc, char *argv[], std::string& fileName, int& speed);

#endif // COMMANDLINEREADER_HPP_INCLUDED
