#include <iostream>
#include <fstream>
#include <string>
#include "readfile.h"

int readfile(std::string filename, std::string word) {		
  std::string fileword;
  std::ifstream FILE;
	
  FILE.open(filename);

  if (FILE.is_open()) {
    while (getline(FILE, fileword)) { 
		if (fileword.contains(word)) { 
			FILE.close(); return 0; 
		} 
	}
		FILE.close();
		return 2;
	} 
  else { return 1; }
}
