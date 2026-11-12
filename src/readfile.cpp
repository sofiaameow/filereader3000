#include <iostream>
#include <fstream>
#include <string>
#include "readfile.h"

int readfile(std::string filename, std::string word) {		
	std::string fileword;
  std::ifstream FILE;
	
  FILE.open(filename);

  if (FILE.is_open()) {
		int status;
    while (getline(FILE, fileword)) { status = (fileword.find(word) != std::string::npos) ? 0 : 2; } //If word is found (fileword == word (determined by checking fileword != npos)), status = 0. Otherwise status = 2.
		FILE.close();
		return status;
	} 
  else { return 1; }
}
